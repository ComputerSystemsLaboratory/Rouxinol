#include<iostream>
using namespace std;
int A[15];
int L[15];int R[15];
int n;

bool dfs(int i, int j, int k)
{
	
	if(i==10) return true;
	if(A[i] > L[j-1])
	{
		L[j] = A[i];
		if(dfs(++i,++j,k))
			return true;
	}
	if(A[i] > R[k-1])
	{
		R[k] = A[i];
		if(dfs(++i,j,++k))
			return true;	
	}	
	return false;
}
void solve()
{

	if(dfs(0,1,1))
		cout << "YES"<<endl;
	else
		cout <<"NO"<<endl;
}

int main()
{
	
	cin >>n;
	while(n--)
	{
		for(int i =0; i<10; i++)
			cin >> A[i];
		L[0] = R[0] = 0;		
		solve();
	}
}