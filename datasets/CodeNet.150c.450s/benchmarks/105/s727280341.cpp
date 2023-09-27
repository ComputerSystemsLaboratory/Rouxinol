#include<cstdio>
typedef long long ll;
const int N=203,K=60;
int n,k;ll a[N],f[K];char s[N];
inline void Insert(ll a){
	for(int j=K-1;~j;j--)if(a>>j&1)
	  if(f[j])a^=f[j];
	  else{f[j]=a;return;}
}
inline bool Find(ll a){
	for(int j=K-1;~j;j--)if(a>>j&1)
	  if(f[j])a^=f[j];
	  else return 0;
	return 1;
}
int main(){
	int T;scanf("%d",&T);for(;T--;){
	k=0;
	for(int i=0;i<K;i++)f[i]=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	  scanf("%lld",a+i);
	scanf("%s",s+1);
	for(int i=n;i;i--){
	  if(s[i]=='0')Insert(a[i]);
	  if(s[i]=='1'&&!Find(a[i])){puts("1");goto Brk;}
	}
	puts("0");
	Brk:;
	}return 0;
}