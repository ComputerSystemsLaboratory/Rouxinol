using namespace std;
#include <iostream>
#include <string>
#include <set>
#include <functional>
#include <vector>
#include <algorithm>
#include <stdio.h>
#define INF 1<<12
typedef pair<int,int> p;
int main()
{
	int n,d[10][10];
	while(cin>>n&&n){
		fill(d[0],d[10],INF);
		int a,b,c;
		for(int i=0;i<n;i++){
			cin>>a>>b>>c;
			d[a][b]=d[b][a]=c;
		}
		for(int i=0;i<10;i++)d[i][i]=0;
		for(int k=0;k<10;k++)
			for(int i=0;i<10;i++)
				for(int j=0;j<10;j++)
					d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
		int ans[10]={};
		vector<p> res;
		for(int i=0;i<10;i++)
			for(int j=0;j<10;j++)
				if(d[i][j]<INF)ans[i]+=d[i][j];
		for(int i=0;i<10;i++){
			if(ans[i]!=0)res.push_back(p(ans[i],i));
			//printf("ans[%d]:%d\n",i,ans[i]);
		}
		sort(res.begin(),res.end());
		cout<<res.front().second<<" "<<res.front().first<<endl;
	}

    return 0;
}