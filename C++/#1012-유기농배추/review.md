# 🥹 오늘의 코딩 문제

## 2025-05-23 유기농 배추 (https://www.acmicpc.net/problem/1012)

### 연결된 배추는 지렁이 한마리로 커버 가능 지렁이 몇마리 있는지 구하기
### bfs로 탐색하여 처음 배추 있는 좌표에서 상하좌우 탐색하고 배추가 있으면 0으로 바꿈-> 연결된 곳은 0이 되고 bfs안함 -> bfs 실행 횟수로 지렁이 수 계산

M,N이 주어지는데 변수 잘 설정하고 파악하기</br>
vector<vecotr<int>> ground(N,vector<int> line(M,0)); 으로 해서 접근할 때 ground[y][x]로 해야 했음</br>
처음 칸 0 만들고 큐에 넣음->한번 bfs할때 연결된거 모두 탐색-> 연결된 칸 queue에 넣고 0만들기</br>
```
//bfs(vector<vector<int>>&ground, int y_first, int x_first, int N, int M)
queue<pair<int,int>> que;
que.push(make_pair(y_first,x_first));
while(!que.empty())
{
	x = que.front().second;
	y = que.front().first;
	ground[y][x] = 0;
	if(x+1<M)
	if(x-1>=0)
	if(y+1<N)
	if(y-1>=0)
	{
		if(ground[?][!]==1)
		{
			que.push(make_pair(?,!));
			ground[?][!] = 0
		}
	}
	que.pop();
}

```
