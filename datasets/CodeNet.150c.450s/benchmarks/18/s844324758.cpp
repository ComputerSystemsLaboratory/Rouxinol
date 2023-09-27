#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<ll,ll> P;
const ll MOD=1234567;
const ll INF=1000000010;
const ll LINF=1000000000000000010LL;
const int MAX=500010;
const double EPS=1e-3;
int dx[4]={0,1,0,1};
int dy[4]={0,0,1,1};
int main(){
	int n;cin>>n;
	int m=100000;
	for(int i=0;i<n;i++){
		m=m*105/100;
		if(m%1000){
			m-=m%1000;
			m+=1000;
		}
	}
	cout<<m<<endl;
	return 0;
}

