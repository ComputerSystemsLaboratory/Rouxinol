#include<cstdio>

using namespace std;

long long a[201];
char s[202];
int main(){
	int t;
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%lld",&a[i]);
		scanf("%s",s+1);
		for(int i=n;i;i--){
			if(a[i]==0)continue;
			int u=60;
			while(!(a[i]>>u&1))u--;
			for(int j=i-1;j;j--)
				if(a[j]>>u&1)a[j]^=a[i];
		}
		int ans=0;
		for(int i=1;i<=n;i++)
			if(s[i]=='1'&&a[i])
				ans=1;
		printf("%d\n",ans);
	}
}
