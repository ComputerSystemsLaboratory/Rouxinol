#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		vector<int> A(n);
		vector<int> B(n);
		for(int i = 0; i < n; ++i)
		{
			cin >> A[i] >> B[i];
		}
		int pointA = 0;
		int pointB = 0;
		for(int i = 0; i < n; ++i)
		{
			if(A[i] > B[i])
			{
				pointA += A[i] + B[i];
			}
			else if(A[i] < B[i])
			{
				pointB += A[i] + B[i];
			}
			else
			{
				pointA += A[i];
				pointB += A[i];
			}
		}
		cout << pointA << " " << pointB << endl;
	}
}

int main()
{
	solve();
	return(0);
}