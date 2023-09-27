#include <iostream>
using namespace std;
int A[21],n;

bool solve(int A[], int i, int m)
{
	if(m==0) return true;
	if(i>=n) return false;
	bool res = (solve(A,i+1,m) || solve(A,i+1,m-A[i]));
	return res;
}

int main(int argc, char const *argv[])
{
	int q;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		int m;
		cin>>m;
		if(solve(A,0,m)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}