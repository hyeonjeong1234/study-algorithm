#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<node> heap;

typedef struct
{
	int val = 0;
	node* left = nullptr;
	node* right = nullptr;
}node;
int heap_sort(node& x)
{
	queue<node*> que;
	while (!que.empty())
	{

	}
}
int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		node x;
		int a;
		cin >> a;
		if (a == 0)
		{
			if (heap.size() == 0)
				cout << "0\n";
			else {
				cout << heap[0].val;
			}
		}
		else
		{
			x.val = a;
			heap.push_back(x);
			heap_sort(x);
		}
	}
}