#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long int lnt;
typedef pair<lnt,lnt> P;
const lnt INF = 0xffffffffffffff;
lnt d[10][10];
lnt x,y,z;
lnt used[10];
int main()
{while(1){
	int n;
	cin>>n;
	if(!n) return 0;
	fill(d[0],d[10]+10,INF);
	fill(used,used+10,0);
	for(lnt i=0;i<n;i++){
		cin>>x>>y>>z;
		used[x]=1;
		used[y]=1;
		d[x][y]=z;
		d[y][x]=z;
	}
	for(lnt i=0;i<10;i++){
		if(used[i]) d[i][i]=0;
	}
	for(lnt k=0;k<10;k++){
		for(lnt i=0;i<10;i++){
			for(lnt j=0;j<10;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
	P ans=P(-1,INF);
	lnt sum;
	for(lnt i=0;i<10;i++){
		if(!used[i]) continue;
		sum=0;
		for(lnt j=0;j<10;j++){
			if(!used[j]) continue;
			sum+=d[i][j];
		}
		if(ans.second>sum){
			ans.first=i;
			ans.second=sum;
		}
	}
	cout<<ans.first<<' '<<ans.second<<endl;
}}