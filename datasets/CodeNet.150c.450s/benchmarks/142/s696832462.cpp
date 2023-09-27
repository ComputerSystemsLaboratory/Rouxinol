#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
inline ll r() {
	ll x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9')c=getchar();
	if(c=='-')f=-1,c=getchar();
	while(isdigit(c))x=x*10+c-'0',c=getchar();
	return x*f;
}
#define d r()
ll n,k;
ll a[1000010];
int main(){
	n=d,k=d;
	f(i,1,n)a[i]=d;
	f(i,k+1,n){
		if(a[i]>a[i-k])cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}