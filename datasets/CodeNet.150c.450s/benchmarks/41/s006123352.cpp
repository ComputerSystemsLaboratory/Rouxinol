#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
struct edge{int to;ll cost;};
typedef pair<ll,int> P;
const ll INF=1000000000000LL;
const ll MOD=1000000007LL;
const ll MAX=100010;
int main(){
	int v,e;
	cin>>v>>e;
	ll d[110][110];
	for(int i=0;i<=v;i++){
		for(int j=0;j<=v;j++){
			if(i==j){
				d[i][j]=0;
			}else{
				d[i][j]=INF;
			}
		}
	}
	for(int i=0;i<e;i++){
		int s,t;
		ll dd;
		cin>>s>>t>>dd;
		d[s][t]=min(d[s][t],dd);
	}
	for(int k=0;k<v;k++){
		for(int i=0;i<v;i++){
			for(int j=0;j<v;j++){
				if(d[i][k]!=INF&&d[k][j]!=INF){
					d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
				}
			}
		}
	}
	for(int i=0;i<v;i++){
			if(d[i][i]<0){
				cout<<"NEGATIVE CYCLE"<<endl;
				return 0;
			}
	}
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			if(d[i][j]==INF){
				cout<<"INF";
			}else{
				cout<<d[i][j];
			}
			if(j!=v-1){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

