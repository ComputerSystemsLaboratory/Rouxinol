#include<iostream>
using namespace std;
int A[2005];
int n; 
bool solve(int i,int m)//在第i个元素后面有值为m的组合就返回true
{
	if(m==0)
		return true;
	if(i>=n)
		return false;
	if(solve(i+1,m)||solve(i+1,m-A[i]))
		return true;
	else return false;
		
} 
int main()
{
	//int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int an;
		cin>>an;
		if(solve(0,an))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	} 
	return 0;
}
