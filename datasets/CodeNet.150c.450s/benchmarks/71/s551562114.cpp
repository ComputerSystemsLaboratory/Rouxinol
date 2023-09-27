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
	int n;
	while(cin>>n){
		int ans=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				for(int k=0;k<10;k++){
					for(int l=0;l<10;l++){
						if(i+j+k+l==n){
							ans++;
						}
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

