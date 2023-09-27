#include <iostream>

using namespace std;

int n;
const int MAX = 30;
int A[MAX];

void solve()
{
	A[0] = 1;
	A[1] = 2;
	A[2] = 4;
	for(int i=3; i<30; i++)
	{
		A[i] = A[i-1] + A[i-2] + A[i-3];
	}	
}

int main(int argc, char** argv)
{
	solve();
	while(cin >> n, n)
	{
		cout << (A[n-1]/10 + 1)/365 + 1 << endl;
	}
}