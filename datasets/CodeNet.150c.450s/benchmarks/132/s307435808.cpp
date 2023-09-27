#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#define ll long long
#define INF 1145141919810
#define rep(i,a) for(int i=0;i<a;i++)
#define nrep(i,a,b) for(int i=a;i<b:i++)
#define mrep(i,a) for(int i=a;i>=0;i--)
using namespace std;

bool end_check(vector<ll> a,ll p,ll winner){
	bool flag=true;
	rep(i,a.size()) if(i!=winner && a[i]) return false;
	if(!p) return true;
	return false;
}

int main(){
	while(true){
	ll n,p; cin>>n>>p;
	if(!n&&!p) break;
	vector<ll> a(n);
	ll winner=0;
	while(true){
		//step
		if(p){
			p--;
			a[winner]++;
		}else{
			p+=a[winner];
			a[winner]=0;
		}
		
		if(end_check(a,p,winner)) break;
		
		//next
		if(winner==n-1) winner=0;
		else winner++;
		
	}cout<<winner<<endl;
	}
	return 0;
}