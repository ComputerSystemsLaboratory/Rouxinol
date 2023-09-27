#include <bits/stdc++.h>
#define int long long
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define INF (((ll)1<<31)-1)
#define eps LDBL_EPSILON
#define moder (1000000007)
#define pie 3.141592653589793238462643383279
#define P std::pair<int,int>
#define prique priority_queue
#define ggr getchar();getchar();return 0;
using namespace std;
int n;
double b[8];
int a[8];
int gcd(int x,int y){
	if(y==0)return x;
	return gcd(y,x%y);
}
signed main(){
	cin>>n;
	rep(i,n){
		rep(j,8){
			cin>>b[j];
			a[j]=b[j]*1000000;
		}
		int A=a[2]-a[0],B=a[3]-a[1],C=a[6]-a[4],D=a[7]-a[5];
		if(A*D==B*C)puts("YES");
		else puts("NO");
	}
	return 0;
}
