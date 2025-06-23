# 🥹 오늘의 코딩 문제

## 2025-06-23 절댓값 힙 (https://www.acmicpc.net/problem/11286)
### 절댓값으로 최소힙 만들기
### priority_queue<int, vector<int>, compare>//사용자 함수로 우선순위 정하기!
### 절댓값 구하기 <cmath> abs()함수 이용
```
struct compare{
	bool operator()(int a, int b){
		if(abs(a) == abs(b))
			return a > b; 
		else
			return abs(a) > abs(b);
	}
};
```
### sort 와 priority_queue에서의 사용자 정의 함수 비교
|구분|sort|priority_queue
|:---:|:---:|:---:|
| |true를 반환하는 쪽 먼저 | true를 반환하는 쪽이 우선순위가 낮다|
|return a > b| a가 b 보다 큰가? 맞으면 a먼저->내림차순| a가 b보다 크면 ture->a가 b보다 크면 우선순위가 낮다 -> 작은거에서 큰거로 정렬 -> 오름차순|
|return a < b| a가 b 보다 작은가?맞으면 a먼저->오름차순|a가 b보다 작으면 ture->a가 b보다 작으면 우선순위가 낮다-> 큰거에서 작은거로 정렬 -> 내림차순|
