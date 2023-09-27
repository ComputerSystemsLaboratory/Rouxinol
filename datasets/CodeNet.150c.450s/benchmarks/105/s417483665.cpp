#include<bits/stdc++.h>
#define cs const
#define pb push_back
using namespace std;
typedef long long ll;
cs int N = 205, M = 65;
int T, n; ll a[N], b[M];
char S[N];
void ins(ll x){
	for(int i=60;~i;i--)
	if(x>>i&1){
		if(b[i])x^=b[i]; 
		else return b[i]=x,void();
	}
} bool chk(ll x){
	for(int i=60;~i;i--)
	if(x>>i&1){
		if(b[i])x^=b[i];
		else return true;
	} return false;
}
void Main(){
	scanf("%d",&n);
	memset(b,0,sizeof(b));
	for(int i=1; i<=n; i++)
	scanf("%lld",&a[i]);
	scanf("%s",S+1);
	for(int i=n; i>=1; i--){
		if(S[i]=='0')ins(a[i]);
		else if(chk(a[i])) 
		return puts("1"),void();
	} puts("0"); 
}
int main(){
	#ifdef FSYolanda
	freopen("1.in","r",stdin);
	#endif
	scanf("%d",&T);
	while(T--)Main();
	return 0;
}