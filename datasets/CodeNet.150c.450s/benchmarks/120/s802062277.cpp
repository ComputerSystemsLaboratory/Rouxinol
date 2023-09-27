#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(void){
	int r,c;
	while(cin >> r >> c,r){
		int row[10010];
		rep(j,c) row[j]=0;
		rep(i,r)rep(j,c){
			int in;
			cin >> in;
			row[j]|=(in<<i);
		}
		int ans=0,all=(1<<r)-1;
		r--;
		rep(mask,1<<r){
			int cur=0;
			rep(i,c){
				int zero=row[i]^mask;
				int one=zero^all;
				cur+=max(__builtin_popcount(zero),__builtin_popcount(one));
			}
			ans=max(ans,cur);
		}
		cout << ans << endl;
	}
}