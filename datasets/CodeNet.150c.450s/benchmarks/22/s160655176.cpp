#include <bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i = (int)j;i <= (int)k;i ++)
#define debug(x) cerr<<#x<<":"<<x<<endl
const int maxn=(int)1e6+5;
const int inf=(1ll<<31)-1;
struct Info{//相当于存的是边及其后端点
    int to,cost;
    Info(int _to,int _cost){
        to=_to,cost=_cost;
    }
    bool operator< (const Info& arg) const {
        return cost>arg.cost;
    }
};
vector<Info> Edges[maxn];
int inq[maxn],d[maxn];
int E,V,o;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   
    cin>>V>>E>>o;
     fill(d+0,d+V,inf);
    rep(i,1,E){
        int s,t,d0;
        cin>>s>>t>>d0;
        Edges[s].push_back(Info(t,d0));
    }
    queue<int> Q;
    Q.push(o);
    d[o]=0;
    inq[o]=1;
    int cnt=0;
    while(!Q.empty()){
        cnt++;
        if(cnt==2e6)break;
        int now=Q.front();
        Q.pop();
        inq[now]=0;
        for(auto e:Edges[now]){
            if(d[e.to]>d[now]+e.cost){
                d[e.to]=d[now]+e.cost;
                if(!inq[e.to])Q.push(e.to);
                inq[e.to]=1;
            }
        }
    }
    if(cnt==2e6)cout<<"NEGATIVE CYCLE"<<endl;
    else{
         rep(i,0,V-1){
            if(d[i]==inf)cout<<"INF\n";
            else cout<<d[i]<<endl;
        }
    }
    
}
/* 
1 ≤ |V| ≤ 1000
0 ≤ |E| ≤ 2000
-10000 ≤ di ≤ 10000
There are no parallel edges
There are no self-loops

4 5 0
0 1 2
0 2 3
1 2 -5
1 3 1
2 3 2
用dis数组记录源点到有向图上任意一点距离，其中源点到自身距离为0，到其他点距离为INF。将源点入队，并重复以下步骤：

1队首x出队

2遍历所有以队首为起点的有向边(x,i)，若dis[x]+w(x,i)<dis[i]，则更新dis[i]

3如果点i不在队列中，则i入队

4若队列为空，跳出循环；否则执行1
 */
/* 
//循环
	for(int i = 0; i < V; i++){
		updated = false;
		for(int k = 0; k < E; k++){
			tmp = Edges[k];
			if(min_dist[tmp.from] != BIG_NUM && min_dist[tmp.to] > min_dist[tmp.from] + tmp.cost){
				min_dist[tmp.to] = min_dist[tmp.from] + tmp.cost;

				updated = true;
				if(i == V-1){
					FLG = false;
					break;
				}
			}
		}
		if(!updated)break;
		if(!FLG)break;
	}
    if(!FLG){
		printf("NEGATIVE CYCLE\n");
		return 0;
	}
 */
