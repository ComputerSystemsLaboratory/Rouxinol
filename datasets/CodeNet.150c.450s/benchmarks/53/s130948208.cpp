#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<set>
// #define Kongxiangzhouye
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MAX_N=100000;
const int INF = 0x3f3f3f3f;

bool vis(int a){
	int len=sqrt(a+0.5);
	for(int i=2;i<len;i++){
		if(a%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	#ifdef Kongxiangzhouye
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	cout<<n<<":";
	int flag;
	while(n!=1){
		flag=1;	
		for(int i=2;i<sqrt(n+0.5);i++){
			if(vis(i)&&n%i==0){
				flag=0;
				n=n/i;
				cout<<" "<<i;
				break;
			}
		}
		if(flag==1)
			break;
	}
	cout<<" "<<n<<endl;


	return 0;
}

