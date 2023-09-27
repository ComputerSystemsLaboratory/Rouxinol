#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
struct edge{int from, to, cost;};
#define INF 1000000001

int V,E,d[1005];
edge es[2005];

bool find_negative_loop(int s){
	int cnt=0;
	for(int i=0;i<V;i++)d[i]=INF;
	d[s]=0;
	while(1){
		bool update=false;
		cnt++;
		for(int i=0;i<E;i++){
			edge e=es[i];
			if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
				d[e.to]=d[e.from]+e.cost;
				if(cnt==V)return true;
				update=true;
			}
		}
		if(!update)break;
	}
	return false;
}

int main(void){
	int r;
	cin>>V>>E>>r;
	for(int i=0;i<E;i++){
		cin>>es[i].from>>es[i].to>>es[i].cost;
	}
	if(find_negative_loop(r)){
		cout<<"NEGATIVE CYCLE\n";
	}else{
		for(int i=0;i<V;i++){
			if(d[i]==INF)cout<<"INF\n";
			else cout<<d[i]<<endl;
		}
	}
	return 0;
}

