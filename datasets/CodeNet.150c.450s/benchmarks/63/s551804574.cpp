        #include <bits/stdc++.h>
        #include<iostream>
        #include<cstdio>
        #include<vector>
        #include<queue>
        #include<map>
        #include<cstring>
        #include<string>
        #include <math.h>
        #include<algorithm>
        #include<functional>
   //    #define int long long
        #define inf  1000000007
        #define pa pair<int,int>
#define ll long long
        #define pal pair<ll,ll>
        #define ppa pair<int,pa>
        #define EPS (1e-10)
        #define equals(a,b) (fabs((a)-(b))<EPS)

        using namespace std;

 
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};
        //----------------kokomade temple------------
int dis[100005];
vector<pa> G[100005];
int V,E,r;
int main(){
	
cin>>V>>E>>r;
	for(int i=0;i<V;i++) dis[i]=inf;
	for(int i=0;i<E;i++){
		int z,zz,zzz;
		cin>>z>>zz>>zzz;
		G[z].push_back(make_pair(zz,zzz));
	}
	
	priority_queue<pa, vector<pa>, greater<pa> > pq;
	dis[r]=0;
	
	for(int i=0;i<G[r].size();i++){
		pq.push(make_pair(G[r][i].second,G[r][i].first));
	}
	
	
	while(pq.size()>0){
		pa w=pq.top();
		pq.pop();
		if(dis[w.second]<w.first) continue;
		dis[w.second]=w.first;
		for(int i=0;i<G[w.second].size();i++){
			pq.push(make_pair(dis[w.second]+G[w.second][i].second,G[w.second][i].first));
		}
	}
	for(int i=0;i<V;i++){
		if(dis[i]==inf) cout<<"INF"<<endl;
		else cout<<dis[i]<<endl;
	}
	
	
	return 0;
	
        }