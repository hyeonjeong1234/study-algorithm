# 🥹 오늘의 코딩 문제

## 2025-04-27 나이순 정렬 (https://www.acmicpc.net/problem/10814)

### 가입자의 나이와 이름으로 이루어진 정보를 나이순으로 정렬 나이 같을 시 가입빠른순으로 정렬

**- #include<utility> pair클래스 이용하여 입력된 정보 저장**
```
#include<vector>//vector 헤더파일에 utility헤더를 포함하고 있음
  pair<int, pair<int, string>> people; // 가입순서를 알아야하기 때문에 인덱스도 함께 저장
  //pair 선언
  pair<int, int> a;
  //초기화
  a.first = 1;
  a.second = 1; //a(1,1)인 pair 초기화
  //a = make_pair(1,1); //이 방법도 사용가능
  // 자료 접근
    cout<<a.first; //pair의 첫번째 요소 접근
    cout<<a.second;
```
**- #include<algorith> sort(사용자정의 함수 사용)함수 이용하여 정렬**
```
bool cmp(pair<int,pair(a,b)>c, pair<int,pair(e,f)>g)
{
  if(c.second.first == g.second.first)
    return c.first<g.first; // 나이 같을시 가입순서 기준 오름차순 정렬
  else
    return c.second.first<g.second.first; // 나이순으로 오름차순 정렬
}
sort(a.begin(),a.end(),cmp);
```
