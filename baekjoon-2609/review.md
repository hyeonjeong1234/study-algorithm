## 최대 공약수 최소공배수 구하기!
---
### 최대공약수
- 유클리드 호제법 이용<br>
숫자 A, B 의 최대 공약수 구하기<br>
A % B = C<br>
B % C = D<br>
C % D = E<br>
.<br>
.<br>
.<br>
Y % Z = 0 까지 계산 후 최대 공약수는 Y!!!
```
int gcd(int a, int b)
{
  if(b == 0)
    retrun a;
  else
    gcd(b, a%b);
}
```
---
### 최소 공배수
```
(A/gcd)*(B/gcd)*gcd
```
