#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<map>
#include<string>
#include<sstream>
#include<vector>
#include<cmath>
#include<set>
#include <bitset>
using namespace std;
const int maxn=10015,inf=0x3f3f3f3f;
int r,c,ans;
bitset<maxn> cookie[10];

void dfs(int step){	
	if(step==r){
		int sum=0,csum=0;
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++){
				csum+=cookie[j][i];
			}
			sum=sum+max(csum,r-csum);
			csum=0;
		}
		ans=max(ans,sum);
		return;//attenion return
	}
	cookie[step].flip();
	dfs(step+1);
	cookie[step].flip();
	dfs(step+1);
	
}
int main()
{
	//freopen("read.txt", "r", stdin);
	while(cin>>r>>c&&r&&c){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				bool val;
				cin>>val;
				cookie[i][j]=val;
			}
		}
		ans=0;
		dfs(0);
		cout<<ans<<endl;
	}
	//fclose(stdin);
	return 0;
}