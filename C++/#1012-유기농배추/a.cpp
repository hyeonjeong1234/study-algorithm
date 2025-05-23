#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(vector<vector<int>>* ground, int x, int y, int N, int M)
{
    if (x)
}

int main()
{
    int T, M, N, K;
    cin >> T;
    for (int test_case = 0; test_case < T; test_case++)
    {
        int count = 0;
        cin >> M >> N >> K;
        vector<int> line(M, 0)
            vector<vector<int>> ground(N, line);
        for (int i = 0; i < K; i++)
        {
            int x, y;
            cin >> x >> y;
            ground[x][y] = 1;
        }
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (ground[i][j] == 1) {
                    BFS(ground, i, j, N, M);
                    count++;
                }
            }
        }
        cout << count << "\n";
    }

}