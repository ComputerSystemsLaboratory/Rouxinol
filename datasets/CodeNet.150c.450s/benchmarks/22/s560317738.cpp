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
int dis[10005];
vector<ppa> G;
int V,E,r;
int main(){
	
cin>>V>>E>>r;
	for(int i=0;i<V;i++) dis[i]=inf;
	for(int i=0;i<E;i++){
		int z,zz,zzz;
		cin>>z>>zz>>zzz;
		G.push_back(make_pair(zzz,make_pair(z,zz)));
	}
	dis[r]=0;
	
	for(int i=0;i<V-1;i++){
		for(int j=0;j<E;j++){
			if(dis[G[j].second.first]==inf) continue;
			dis[(G[j].second).second]=min(dis[G[j].second.first]+G[j].first,dis[G[j].second.second]);
		}
	}
	
	
	for(int j=0;j<E;j++){
		if(dis[G[j].second.first]==inf) continue;
		if(dis[G[j].second.second]>dis[G[j].second.first]+G[j].first ){
			cout<<"NEGATIVE CYCLE"<<endl;
			return 0;
		}
		
	}
	
	
	for(int i=0;i<V;i++){
		if(dis[i]==inf) cout<<"INF"<<endl;
		else cout<<dis[i]<<endl;
	}
	
	
	return 0;
	
        }