#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
typedef long long LL;
int V,E,S;
LL d[100001];
typedef pair<LL,int> P;
vector<P> G[100001];
int main(){
	cin>>V>>E>>S;
	REP(i,E){
	    int a,b;
	    LL c;
	    cin>>a>>b>>c;
	    G[a].push_back(make_pair(c,b));
	    //G[b].push_back(make_pair(c,a));
	}
        REP(i,100001){
            d[i]=10e12;
        }
        priority_queue<P,vector<P>,greater<P> >q;
        q.push(make_pair(0,S));
        while(!q.empty()){
           P p=q.top();q.pop();
           LL cost=p.first;
           LL num=p.second;
           if(d[num]<cost)continue;
                      //cout<<num<<"aaa"<<cost<<endl;
           d[num]=cost;
           REP(i,G[num].size()){
               if(d[num]+G[num][i].first<d[G[num][i].second]){
                  q.push(make_pair(d[num]+G[num][i].first,G[num][i].second));
                  d[G[num][i].second]=d[num]+G[num][i].first;
               }
           }
        }
        REP(i,V){
            if(d[i]==10e12){
               cout<<"INF"<<endl;
            }else{
               cout<<d[i]<<endl;
            }
        }
	return(0);
}