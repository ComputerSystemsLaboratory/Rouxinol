#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> mp;
#define inf 1e9
struct edge{
	int from,to,cost;
};
bool  find_negative_loop(vector<edge> &e,int s,int v,vector<ll> &res ){//bellmanford
	res = vector<ll>(v,inf);
	res[s] = 0;
	int E = e.size();
	for(int i=0;i<v;i++){
		for(int j=0;j<E;j++){
			if(res[e[j].from] != inf &&res[e[j].to]  > res[e[j].from] + e[j].cost){
				res[e[j].to] = res[e[j].from] + e[j].cost;
				if(i==v-1)return true;
			}
		}
	}
	return false;
}

int main(){
	int v,E,r;
	cin>>v>>E>>r;
	vector<edge> e(E);
	for(int i=0;i<E;i++){
		cin>>e[i].from>>e[i].to>>e[i].cost;
	}
	vector<ll> res;
	if(find_negative_loop(e,r,v,res)){
		cout<<"NEGATIVE CYCLE"<<endl;
	}else{
		for(int i=0;i<v;i++)if(res[i] == inf){
			cout<<"INF"<<endl;
		}else{
			cout<<res[i]<<endl;
		}
	}

	return 0;
}


