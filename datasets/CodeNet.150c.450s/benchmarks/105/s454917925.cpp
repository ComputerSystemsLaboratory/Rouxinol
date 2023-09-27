#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
#define mp make_pair
#define fi first
#define se second
#define All(x) (x).begin(),(x).end()
#define Y1 "YES"
#define N1 "NO"
#define ENDL '\n'
#define count2(x) _builtin_popcount(x)
#define MaxN 211
#define MaxBit 62
ll num[MaxN];
char s[MaxN];
ll d[MaxBit];
bool add(ll x){
	for(int i=MaxBit-1;i>=0;--i){
		if((x>>i)&1){
			if(d[i])x^=d[i];
			else{
				d[i]=x;
				return 1;
			}
		}
	}
	return 0;
}
ll search(ll x){
	for(int i=MaxBit-1;i>=0;--i){
		if((x^d[i])>x)
		x^=d[i];
	}
	return x;
}
int main(){
	int n;
	int T;
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;++i)
		cin>>num[i];
		for(int i=1;i<=n;++i)
		cin>>s[i];
		int flag=0;
		for(int i=1;i<=n;++i){
			if(s[i]=='1'){
				memset(d,0,sizeof(d));
				for(int j=i+1;j<=n;++j){
					if(s[j]=='0')
					add(num[j]);
				}
				if(add(num[i])==1){
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			cout<<"1\n";
		else
			cout<<"0\n";
	LOOP: 1==1;
	}
	return 0;
}

