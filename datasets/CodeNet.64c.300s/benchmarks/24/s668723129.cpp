#include<cstdio>
#include<iostream>
using namespace std;
int q[6][3];
int main()
{
	int i,j,n,s,m,a,b,p=1;
	while(cin>>s)
	{
		a=0;b=0;
		if(s==0)break;
	for(i=1;i<=s;i++)
	{
		cin>>n>>m;
		if(n>m)a=a+n+m;
		else if(n<m)b=b+n+m;
		else
		{
			a=a+n;
			b=b+m;
		}
	}
	q[p][1]=a;
	q[p][2]=b;
	p++;
    }
    for(i=1;i<p;i++)cout<<q[i][1]<<" "<<q[i][2]<<endl;
	return 0;
}