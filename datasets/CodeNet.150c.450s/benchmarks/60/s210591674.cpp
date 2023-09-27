#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a<b?b:a)
#define abs(x) (x<0?(-x):x)
#define F(i,L,R) for (int i = L; i < R; i++)
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define RF(i,L,R) for (int i = L; i > R; i--)
#define RFE(i,L,R) for (int i = L; i >= R; i--)
#define getI(a) scanf("%d", &a)
#define getII(a,b) scanf("%d%d", &a, &b)
#define getIII(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define VgetI(n) int (n); scanf("%d",&(n))
#define VgetII(n,m) int (n),(m); scanf("%d %d",&(n),&(m))
#define VgetIII(n,m,k) int (n),(m),(k); scanf("%d %d %d",&(n),&(m),&(k))
#define ll long long
#define INF 2000000000
#define nINF -2000000000
#define MOD 1e9+7
#define PI 3.1415926535897932384626
bool matrix[1005][1005];
int main(){
	//freopen("test.out","w",stdout);
	int n;
	scanf("%d",&n);
		int maxV=-INF;
		while(n--){
			VgetII(u,k);
			if(u>maxV) maxV=u;
			while(k--){
				VgetI(to);
				if(to>maxV) maxV=to;
				matrix[u-1][to-1]=1;
			}
		}
		F(i,0,maxV){
			F(j,0,maxV) j==maxV-1?printf("%d\n",matrix[i][j]):printf("%d ",matrix[i][j]);
			//if(i!=maxV-1) puts("");
		}
	//fclose(stdout);
}

