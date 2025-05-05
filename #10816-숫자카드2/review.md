# 🥹 오늘의 코딩 문제

## 2025-05-02 숫자 카드2 (https://www.acmicpc.net/problem/10816)

### binary_search(vector.begin(),vector.end(),find_element)
### 시간초과
```
ios::sync_with_stdio(false)
cin.tie(nullptr)
cout.tie(nullptr)
```
### 입출력 시간 줄이는 코드 알아보기 (원문 : https://velog.io/@d2h10s/c-iossyncwithstdio%EB%9E%80)

**- stream : 주변기기로 부터 입출력 받는 통로**<br/>

**- standard stream**<br/>
- c stdio<br/>
stdin<br/>
stdout<br/>
stderr<br/>
- c++ iostream<br/>
std::cin<br/>
std::cout<br/>
std::cerr<br/>
std::clog<br/>
std::wcin<br/>
std::wcout<br/>
std::wcerr<br/>
std::wclog<br/>

**- Sync_with_stdio**
🌞 c의 stream과 c++의 stream은 동기화 되어있음!<br/>
- 코드 작성시 c style 코드와 c++ style 코드를 혼용하여도 같은 stream 버퍼에 쌓이기 때문에 의도한대로 입출력 가능<br/>
- multi-threading을 사용할 때 각 스레드에서 출력 연산을 수행하여도 충돌이 일어나지 않음<br/>
  => std::cout, std::cin을 쓸때 scanf,printf 보다 느림!!<br/>
🌞 즉, 각 스트림이 각각의 버퍼를 가지고 독립적으로 사용하기 위해 동기화 해제할 필요가 있음!<br/>
- 멀티쓰레딩 시 충돌 발생 가능성<br/>
- 각 연산 마다 각각의 버퍼를 사용하여 출력하기 때문에 입출력 순서가 보장되지 않음<br/>
=> ios::Sync_with_stdio(true); //스트림 동기화 설정하는 코드<br/>
=> ios::Sync_with_stdio(false);//스트림 동기화 해제<br/>
⚠️ 스트림 동기화 해제시 c style 과 c++ style 혼용하면 안됨!!!<br/>

**- cin.tie(nullptr), cout.tie(nullptr)**<br/>
🌞 cin과 cout은 default로 tie되어있음<br/>
- tie<br/>
두개의 stream이 sync되어 있기 때문에 한 스트림에서 다른 스트림이 작업 요청을 하면 작업했던 내용을 flush한다는 의미  <br/>
  *flush : buffer에 쌓아둔 데이터 모두 내보내는것<br/>
- 일반적으로 버퍼가 가득차면 flush함<br/>
- 적절히 flush하지 않고 긴 문자열을 출력하면 개행이나 뒤쪽이 잘리는 경우 발생할 수 있음<br/>
  -> 이 경우 의도적으로 buffer flush넣기도 함(일반적으로는 엄청 느리지 않은 이상 필요 없음)<br/>
=>  입출력이 변환이 빈번하게 이루어지는 경우 untie를 하면 입출력 더 빨라짐<br/>
⚠️ untie시 출력이 flush되지 않고 입력을 받는 경우 발생할 가능성 있음!!(입출력 순서 보장안됨)<br/>
```
ex)
std::cout<<"Enter name";
std::cin>>name;
```
위의 코드에서 입력을 안내하는 문자열이 출력되지 않았는데 입력을 먼저 요구하는 경우가 생길 수 있음<br/>

**- std::endl**<br/>
🌞 endl을 사용하여 개행 시 출력 속도 느려짐<br/>
- endl은 줄바꿈과 동시에 flush를 함<br/>
- flush를 적절히 하면 원하는 입출력 순서를 보장받을 수 있지만 코테에서는 escape sequence를 사용하는 것이 유리<br/>
    *escape sequence : 특수 문자나 예약 문자를 문자 그대로 출력하는 것 ex) \n, \t, \\\\, \\\" 등
