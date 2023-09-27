#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
struct edge{int to;int cost;};
typedef pair<int,int> P;
const int Inf=1e7;
int N;
int A,B,C;
vector<edge>X[10];
int d[10];
int cou;
int main()
{
	while(true){

		for(int i=0;i<=cou;i++)X[i].clear();
		int ans1=0,ans2=1e9;
		cou=0;
		scanf("%d",&N);
		if(N==0)break;
		for(int i=0;i<N;i++){
			scanf("%d%d%d",&A,&B,&C);
			edge e1={B,C};
			X[A].push_back(e1);
			edge e2={A,C};
			X[B].push_back(e2);
			cou=max(cou,max(A,B));
		}
		for(int s=0;s<=cou;s++){
			for(int i=0;i<=cou;i++)d[i]=Inf;
			d[s]=0;
			priority_queue<P, vector<P>, greater<P> > que;
			que.push(make_pair(0,s));
			while(!que.empty()){
				P p=que.top();que.pop();
				int v=p.second;
				if(d[v]<p.first)continue;
				for(int i=0;i<X[v].size();i++){
					edge e=X[v][i];
					if(d[e.to]>d[v]+e.cost){
						d[e.to]=d[v]+e.cost;
						que.push(make_pair(d[e.to],e.to));
					}
				}
			}
			//for(int i=0;i<=cou;i++)printf("%d %d %d\n",s,i,d[i]);
			int sum=0;
			for(int i=0;i<=cou;i++)sum+=d[i];
			if(ans2>sum){
				ans2=sum;
				ans1=s;
			}
		}
		printf("%d %d\n",ans1,ans2);
	}
	return 0;
}