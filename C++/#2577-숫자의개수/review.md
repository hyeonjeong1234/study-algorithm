# 🥹 오늘의 코딩 문제

## 2025-05-25 숫자의 개수 (https://www.acmicpc.net/problem/2577)

### 주어진 3개의 숫자를 곱한 결과에 사용된 0~9의 개수를 구해라
### int로 곱 저장한 뒤 string으로 변환 후 하나씩 잘라서 계산
```
  result = to_string(mul); // to_string(string a) int->string 변환
  num = result.substr(i++,1); // str.substr(시작위치, 크기)
```