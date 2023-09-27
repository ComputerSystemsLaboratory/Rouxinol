#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
const int MAX=1001;
int lcs(string X,string Y) 
{
	int i=0,j=0,c[MAX][MAX],x=X.length(),y=Y.length();
	for(i=0;i<=x;i++)c[i][0]=0;
	for(i=0;i<=y;i++)c[0][i]=0;
	for(i=1;i<=x;i++) 
	for(j=1;j<=y;j++) 
	if(X[i-1]==Y[j-1])c[i][j]=c[i-1][j-1]+1; 
	else c[i][j]=max(c[i][j-1],c[i-1][j]);
	return c[x][y];
}
int main()
{
	int n;cin>>n;
	string X,Y;
	while(n--)
	{
		cin>>X>>Y;
		cout<<lcs(X,Y)<<endl;
	}
}