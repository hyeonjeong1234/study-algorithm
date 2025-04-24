# 🥹 오늘의 코딩 문제

## 2025-04-11 트리 부모찾기 (https://www.acmicpc.net/problem/11725)

### 부모 찾기

- 연결점 주어짐<br>
```
    7 //노드 개수
    1 6
    6 3
    3 5
    4 1
    2 4
    4 7
``` 
→ 2차원 벡터에 각 노드별로 연결된 점 집어넣기<br>
```
    vector<int> nodes;
    
    vector<vector<int>> tree(N+1, nodes)
    
    tree[1] = 1에연결된 노드(nodes = {6, 4})
```
 → 각 각의 부모가 있는지 확인하는 벡터
```    
     vector<int> parent(N+1, 0)
    
    0이면 부모 아직 확인안됨 index == value;
```
 
→ 1이 루트니까 1부터 돌면서 연결된 노드 하나씩 방문 <br>
→ 큐에 방문예정이 노드 → 지금 방문중인 노드의 자식들 넣어두고<br>
→ 방문끝난 노드는 큐에서 제외<br>
```
    #include<queue> 
    
    queue<int>que;
    que.push(1);
    parent[1] = 1;
    
    while(!que.empty())
    {
        int thisnode = que.front();
        if(parent[thisnode]≠ 0)
        {
            for(int i = 0; i<tree[thisnode].size();i++)
          {
                if(tree[thisnode][i] ≠ parent[thisnode])

                {
                    que.push(tree[thisnode][i]);
                    parent[tree[thisnode][i]]=thisnode;
                }
          }
        }
        que.pop();
    }
```
### ⚠️ 진짜 주의 사항 “\n”안쓰고 endl쓰면 시간초과 남 스페셜 저지 때문이라는 데 걍 앞으로는 “\n”을 애용하자!
