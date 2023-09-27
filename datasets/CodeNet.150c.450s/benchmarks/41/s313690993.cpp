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
       #define int long long
        #define inf  100000000000007
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
int dis[105][105];
int a[105][105];
signed main(){
	int V,E;
cin>>V>>E;
	for(int i=0;i<V;i++)for(int j=0;j<V;j++) dis[i][j]=inf,a[i][j]=inf;
	for(int i=0;i<V;i++) dis[i][i]=0;
	for(int i=0;i<E;i++){
		int y,yy,yyy;
		cin>>y>>yy>>yyy;
		dis[y][yy]=yyy;
		a[y][yy]=yyy;
	}
	
	
	for(int i=0;i<V;i++)for(int j=0;j<V;j++)for(int k=0;k<V;k++){
		if(dis[j][i]!=inf && dis[i][k]!=inf)dis[j][k]=min(dis[j][k],dis[j][i]+dis[i][k]);
	}
	
	for(int i=0;i<V;i++){
		if(dis[i][i]<0) {
			cout<<"NEGATIVE CYCLE"<<endl;
			return 0;
		}
	}
	
	
	for(int i=0;i<V;i++){
		if(dis[i][0]<inf )cout<<dis[i][0];
		else cout<<"INF";
		for(int j=1;j<V;j++){
			if(dis[i][j]<inf) cout<<" "<<dis[i][j];
			else cout<<" INF";
		}
		cout<<endl;
	}
	return 0;
	
        }