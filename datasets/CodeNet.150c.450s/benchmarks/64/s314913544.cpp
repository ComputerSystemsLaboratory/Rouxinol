#include<iostream>
using namespace std;
int a[21],n,q,b[210];

int solve(int i,int m)
{
	if(m==0)return 1;
	else if(i>=n)return 0;
	int res=solve(i+1,m)||solve(i+1,m-a[i]);
	return res;
}


int main(){
	cin>>n;
	for(int i=0;i<n;cin>>a[i++]);
	cin>>q;
	for(int i=0;i<q;cin>>b[i++]);
	for(int i=0;i<q;i++)
	{
		if(solve(0,b[i])==1)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}