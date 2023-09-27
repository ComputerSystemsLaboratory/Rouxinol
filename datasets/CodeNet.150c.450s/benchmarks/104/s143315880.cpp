#include<iostream>
using namespace std;
int main()
{
	int w,n,a,b,c;
	char null;
	cin>>w>>n;
	int l[w];
	for(int k=0;k<w;k++)
	{
		l[k]=k+1;
	}
	for(int i=0;i<n;i++)
	{
	cin>>a>>null>>b;
	c=l[a-1];
	l[a-1]=l[b-1];
	l[b-1]=c;
    }
    for(int j=0;j<w;j++)
    {
    cout<<l[j]<<endl;
	}
return 0;
}