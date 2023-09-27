#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=200;
const int L=62;
const LL X=1LL<<L;
LL a[N];
char s[N];
LL x[L];
bool ins(LL v){
	for(int i=L-1;i>=0;i--){
		if((v>>i)&1){
			if(x[i]){
				v^=x[i];
			}
			else{
				x[i]=v;
				return true;
			}
		}
	}
	return false;
}
bool work(){
	memset(x,0,sizeof(x));
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>s;
	for(int i=n-1;i>=0;i--){
		if(ins(a[i])&&s[i]=='1'){
			return true;
		}
	}
	return false;
}

int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		puts(work()?"1":"0");
	}
	return 0;
}