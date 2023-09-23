#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int N, M;
	cin >> N;
	int a[N-1], b[N-1]; 
	for (int i=0; i<N; i++)
	{
		cin >> a[i];
	}
	b[0]=a[0];
	M=a[1]-b[0];
	for(int j=1; j<N-1; j++)
	{
		b[j]=min(b[j-1], a[j]);
		M=max(M, a[j+1]-b[j]);
	}
	cout << M << endl;
	return 0;
}