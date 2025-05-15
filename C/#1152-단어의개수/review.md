# 🥹 오늘의 코딩 문제

## 2025-05-15 단어의 개수 (https://www.acmicpc.net/problem/1152)

### 문장을 입력받고 문장에 단어가 몇개인지 출력
### 공백 입력받기
### scanf("%[^\n]s",sentence) || fgets(char*,length, stdin)이용

- **ℹ️ C string 관련 함수</br>**
```
⚠️ strtok(char*," "); //자를 문자열, 구분자 인수로 가짐(https://shjz.tistory.com/48)</br>
```
  => char*word = strtok();//word에 " "을 찾은 다음 문자열 주소 저장</br>
    ```
    ex) sentence = The Curious Case of Benjamin Button
    char * word;
    word = strtok(sentence, " ");//공백 찾은후 \0로 바꿈. 처음 자를때만 자른 문자열 첫주소 반환!!!!! => word = The
    while(word!=NULL) // 두번째 strtok부터는 공백 다음 문자를 반환하기 때문에 word가 null인지 확인 후 반복 
    {
      printf("%s\n",word);
      word = strtok(NULL, " ");// 처음 자를때 찾은 NULL부터 탐색 시작. 공백 찾은 후 null넣고 공백 다음 단어 첫주소 반환!
    }
    //마지막 단어앞 null부터 시작 한 경우 공백 문자를 찾지 못하고 word가 null을 반환함=> 반복문 종료
    ```
- **⚠️ 문장은 공백으로 시작 가능 -> 공백만 있는 문장도 신경써줘야함!</br>**
  - scanf, fgets차이 (https://velog.io/@kdo6301/fgets%EC%99%80-scanf%EC%9D%98-%EC%B0%A8%EC%9D%B4)</br>
  - scanf("%[^\n]s",sentence) 사용할 경우 문장만 입력받고 "\n"은 입력되지 않기 때문에 따로 조건 필요 없이 while문 실행횟수 카운트</br>
  - fgets(sentence, sizeof(sentence), stdin)을 사용할 경우 "\n"이 sentence에 입력되어 처리해줘야함</br>
  ```
  word = strtok(sentence, " ");// scanf였으면 " "입력시 공백만 입력받고 null인데 fgets는 " \n"이 입력됨
                                //=> scanf는 " "입력시 word가 null이 되어 while문 진입불가
                                // => fgets는 " "입력시 word가 "\n"이 되어 while문 진입!
  while(word!=NULL)
  {
    if(*word != '\n')//fgets를 사용할 때 해당 조건을 사용하여 word가 줄바꿈일때는 단어로 카운트 하지 않게 함
      result++;      // 근데 word != "\n"은 주소값을 문자랑 비교하는거라 안되나? word[0] = '\n' || *word != '\n'이런식으로 비교해야함
    word = strtok(null," ");
  }
  ```

  ```
  char* word;
  word = strtok(sentence, " ");  
  if(*word!='\n')
    result++;
  ```
공백인 경
```
atoi(char*str); //문자열을 숫자로 변환
```
