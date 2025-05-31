# 🥹 오늘의 코딩 문제

## 2025-05-27 Hashing (https://www.acmicpc.net/problem/15829)

### 문자열 해싱하는 함수 구현 (a =1 . . . z = 26)
### $H\ =\displaystyle\sum_{i=0}^{l-1}{a_ir^i}\ mod\ M\ (r = 31, M = 1234567891)$  
### H를 unsigned long long으로 r거듭제곱 시 선언해도 오버플로우 발생 
### 모듈러 계산 특징 이용 (a mod n * b mod n) mod n = (a*b)mod n (덧셈, 뺄셈도 가능)
```
int main()
{
    int L, M = 1234567891;
    unsigned long long H = 0, A = 0;
    unsigned long long r = 1;
    string S;
    cin >> L >> S;
    for (int i = 0; i < L; i++)
    {
        H += (S[i] - 96) * r;
        r = (r*31)%M;
    }
    cout << H%M;

}
```
