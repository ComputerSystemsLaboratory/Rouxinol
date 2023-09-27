#include<iostream>
#include<set>
#include<utility>
#include<algorithm>
using namespace std;
#define MP(a,b) make_pair(a,b)
int main(){
	int dp[16][16];
	int w,h,n;
	set<pair<int,int> > s;
	while(cin>>w>>h,w||h){
		cin>>n;
		s.clear();
		fill_n((int*)dp,16*16,0);
		dp[0][0]=1;
		while(n--){
			int x,y;
			cin>>x>>y;
			s.insert(MP(x-1,y-1));
		}
		for(int y=0;y<h;y++){
			for(int x=0;x<w;x++){
				if(x+1<w && s.find(MP(x+1,y))==s.end())
					dp[y][x+1] += dp[y][x];
				if(y+1<h && s.find(MP(x,y+1))==s.end())
					dp[y+1][x] += dp[y][x];
			}
		}
		cout<<dp[h-1][w-1]<<endl;
	}
	return 0;
}