# 🥹 오늘의 코딩 문제

## 2025-05-12 피보나치 함 (https://www.acmicpc.net/problem/1003)

### 피보나치 재귀함수를 실행할 시 1과 0이 몇번 출력되는지 구하시오

### ⚠️ 시간 제한이 0.25초 이므로 재귀함수를 그대로 실행하며 카운트 할 시 시간 초과
**규칙을 찾아서 dp로 해결(이전에 계산된 값을 이용)**

```
//피보나치 수를 구하는 c++ 함수
int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    } else if (n == 1) {
        printf("1");
        return 1;
    } else {
        return fibonacci(n‐1) + fibonacci(n‐2);
    }
}
```
**0일 때 0: 1번, 1: 0번</br>
1일 때 0: 0번, 1: 1번</br>
2일 때 0: 1번, 1: 1번</br>
3일 떄 0: 1번, 1: 2번</br>
.</br>
.</br>
.</br>
dp[n] = dp[n-1]+dp[n-2];</br>**

