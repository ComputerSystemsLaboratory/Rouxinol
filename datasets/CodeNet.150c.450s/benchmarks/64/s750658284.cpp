#include<iostream>

using namespace std;

int n,q;
int A[21];

int solve(int i,int m)
{
	if(m==0) return 1;
	if(i>=n) return 0;
	int res=solve(i+1,m)||solve(i+1,m-A[i]);
	return res;
}

int main()
{	
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> A[i];
	cin >> q;
	int a;
	for(int i=0;i<q;i++)
	{
		cin >> a;
		if(solve(0,a))
			cout << "yes\n";
		else
			cout << "no\n"; 
	}
	return 0;
}
