# 🥹 오늘의 코딩 문제

## 2025-04-26 단어정렬 (https://www.acmicpc.net/problem/1181)

### 단어 길이 기준 정렬 길이가 같을 시 사전순으로 정렬 후 중복된 단어는 한번만 출력

**실행시간을 줄이기 위해 #include\<algorithm\> sort 함수를 이용해 풀이**<br>

**정렬 조건이 여러개 일때 사용자 정의 함수 이용**
```
bool cmp(string a, string b)
{
  if(a.size() == b.size())
    return a < b; // <이면 앞에게 작고 뒤로갈수록 크게 => 오름차순으로 정렬
  return a.size() < b.size(); // 정렬 조건을 a.size()로 표기하여 단어 길이 기준으로 정렬
}
```
**반복되는 단어는 한번만 출력**
```
for(int i = 0; i<N; i++)
{
  if(i!=0; words[i] == words[i-i]) // 앞에 출력한 단어와 동일한 단어이면 출력하지 않고 패스
    continue;
  else
    cout<<words[i]<<'\n';
}
```
**코드 실행시간 출력해보기**
```
int main()
{

    clock_t start, finish;
    double duration;

    start = clock();

    /*실행 시간을 측정하고 싶은 코드*/

    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << duration << "초" << endl;
}
```
