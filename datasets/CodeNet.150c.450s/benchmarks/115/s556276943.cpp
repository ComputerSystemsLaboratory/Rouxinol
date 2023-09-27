#include <iostream>
#include <algorithm>
using namespace std;
const int MAX=1001;
//char result[MAX];
//int cnt=0;
//string ans[MAX];
int lcs(string x,string y,int xlen,int ylen) 
{
	int i=0,j=0,c[MAX][MAX];
	for (i=0;i<=xlen;i++)c[i][0]=0;
	for (i=0;i<=ylen;i++)c[0][i]=0;
	for (i=1;i<=xlen;i++) 
	for (j=1;j<=ylen;j++) 
	if (x[i -1]==y[j-1])
	{
		c[i][j]=c[i-1][j-1]+1; 
		//b[i][j]=1;
	}
	else if (c[i-1][j]>c[i][j-1]) 
	{
		c[i][j]=c[i-1][j]; 
		//b[i][j]=2;
	}
	else if(c[i-1][j]<c[i][j-1])
	{
		c[i][j]=c[i][j-1]; 
		//b[i][j]=3;
	}
	else
	{
		c[i][j]=c[i][j-1]; //??????c[i][j]=c[i-1][j];
		//b[i][j]=4;
	}
	 /*cout << "???????????????????????????????????????" << endl;
	 for(i = 1; i <= xlen; i++)
	 {
		for(j = 1; j < ylen; j++)cout << c[i][j] << " ";
		cout << endl;
	  }*/
	  return c[xlen][ylen];
}
/*void show(int i,int j,string x,int b[][MAX],int cur,int max) 
{
	if(i==0||j==0) 
	{
		for(int s=0;s<max;s++)ans[cnt].push_back(result[s]);
		++cnt;
		return;
	}
	if(b[i][j]==1) 
	{ 
		--cur;
		result[cur]=x[i-1];
		show(i-1, j-1, x, b,cur,max);
	}
	else if(b[i][j]==2)show(i-1, j, x, b,cur,max);
	else if(b[i][j]==3)show(i, j-1, x, b,cur,max);
	else
	{
		show(i,j-1,x,b,cur,max);
		show(i-1,j,x,b,cur,max);
	}
}*/
 int main()
 {
	int n;cin>>n;
	string X,Y;
	while(n--)
	{
		//while(
		cin>>X>>Y;
		//)
		//{
			//cnt=0;
			//for(int i=0;i<MAX;++i)ans[i].clear();
			int x=X.length(),y=Y.length(),len=lcs(X,Y,x,y);//b[MAX][MAX];
			cout<<len<<endl;
			//show(x,y,X,b,len,len);
			//sort(ans,ans+cnt);
			//for(int i=0;i<cnt;++i)cout<<ans[i]<<"\n";
		//}
	}
	
 }