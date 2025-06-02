# 🥹 오늘의 코딩 문제

## 2025-06-02 최소 힙(https://www.acmicpc.net/problem/1927)

### 최소힙 연산 구현 0입력시 최솟값 출력 후 최솟값 삭제, 0아닐시 힙에 저장

- **우선순위 큐 이용</br>**
```
#include<queue>
#include<vector>

// priority_queue<자료형, 구현체, 비교연산자> 출처: https://i-believe-in-me.tistory.com/52 [Do you believe in you?:티스토리]
priority_queue <int, vector<int>, greater<int>> pq_greater; // 오름차순 정렬
priority_queue<int> pq_less; //내림차순 정렬

priority_queue.pop() //맨 앞요소 삭제
priority_queue.top() //맨 앞요소 확인
```

// https://yabmoons.tistory.com/246 (힙정렬 구현?)
