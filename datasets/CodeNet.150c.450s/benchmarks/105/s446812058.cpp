
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;
const int maxn=205;
ll a[maxn],p[maxn];
char s[maxn];
int n,m;

void solve(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++)	scanf("%lld",&a[i]);
		scanf("%s",s+1);
		if(s[n]=='1')	printf("1\n");
		else{
			int flag=0;
			memset(p,0,sizeof(p));
			for(int i=n;i>=1;i--){
				if(s[i]=='0'){
					ll tmp=a[i];
					for(int j=62;j>=0;j--){
						if((1ll<<j)&tmp){
							if(!p[j]){
								p[j]=tmp;break;
							}
							tmp^=p[j];
						}
					}
				}
				else if(s[i]=='1'){
					ll tmp=a[i];
					for(int j=62;j>=0;j--){
						if((1ll<<j)&tmp){
							if(!p[j])	break;
							tmp^=p[j];
						}
					}
					if(tmp){
						flag=1;break;
					}
				}
			}
			printf("%d\n",flag);
		}
	}
}
int main(){
	solve();
	return 0;
}