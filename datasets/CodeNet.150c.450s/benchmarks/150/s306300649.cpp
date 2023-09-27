#include<iostream>
#include<string.h>
using namespace std;
const int MAXN = 3000000;
const int MAXA = 20000;

int A[MAXN];
int B[MAXN];
int C[MAXA];

int main()
{
	int n;
	cin >> n;
	memset(C,0,sizeof(C));
	for(int i = 1; i <= n; i++)
	{
		cin >> A[i];
		C[A[i]]++;
	}
	for(int i = 1; i<=MAXA;i++)
		C[i] = C[i]+C[i-1];
		
	for(int i = 1; i<=n;i++)
	{
		B[C[A[i]]] = A[i];
		C[A[i]]--;	
	}
	
	for(int i = 1; i<=n; i++)
	{
		if(i>1) cout << " ";
		cout << B[i];	
	}
	cout << endl;
		
}