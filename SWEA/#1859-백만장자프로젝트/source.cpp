#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{

		int N;
		long long sum = 0;
		cin >> N;
		vector<int> arr;
		for (int i = 0; i < N; i++)
		{
			int val;
			cin >> val;
			arr.push_back(val);

		}
		int max = arr.back();
		for (int i = arr.size() - 1; i >= 0; i--)
		{
			if (max < arr[i])
				max = arr[i];
			else
			{
				sum += max - arr[i];
			}
		}
		cout << "#" << test_case << " " << sum << "\n";

	}
	return 0;
}