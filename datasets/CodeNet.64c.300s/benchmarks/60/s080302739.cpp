#include<iostream>
using namespace std;
int xy[16][16]; int a,b;
int dp(const int x,const int y)
{
	if(x>a || y>b) return (0);
	if(x==a && y==b) return (1);
	if(xy[x-1][y-1]==0) return (0);
	if(xy[x-1][y-1]==-1) return (dp(x+1,y)+dp(x,y+1)) ;
	return (0);
}
int main()
{
	while(1)
	{
		cin >> a >> b ; if(a==0 && b==0) break;
		int n; cin >> n ;
		for(int i=0;i<16;i++) for(int j=0;j<16;j++) xy[i][j]=-1;
		int koji[40][2];
		for(int i=0;i<n;i++) cin >> koji[i][0] >> koji[i][1] ;
		for(int i=0;i<n;i++) xy[koji[i][0]-1][koji[i][1]-1]=0;
		cout << dp(1,1) << '\n' ;
	}
}