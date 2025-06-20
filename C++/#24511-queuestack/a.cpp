#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<pair<int, pair<queue<int>, stack<int>>>>A;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        queue<int>que;
        stack<int>stac;
        A.push_back(make_pair(num, make_pair(que, stac)));
    }
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if (A[i].first == 0)
        {
            A[i].second.first.push(x);

        }
        else {
            A[i].second.second.push(x);
        }
    }

    int M;
    cin >> M;
    int x;
    for (int i = 0; i < M; i++)
    {
        cin >> x;
        for (int j = 0; j < N; j++)
        {
            if (A[j].first == 0)
            {
                A[j].second.first.push(x);
                x = A[j].second.first.front();
                A[j].second.first.pop();
            }
        }
        cout << x << " ";
    }
    return 0;
}
//시간초과 해결필요