#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int N, K;
	cin >> N >> K;
 
	string s;
	//cin >> s;
 
	//int A[5]
	//sort(A, A + 5);
	long long* A;
	A = new long long[N + 1];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	A[N] = -1;
	for (int i = 0; i < N; i++)
	{
		if (A[i + K] < 0)
		{
			break;
		}
		if (A[i] < A[i + K])
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	delete[] A;
}
