#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
const int INF=INT_MAX,MOD=1e9+7;

int main(){
	int h;
	while(cin>>h&&h){
		int board[5][h];
		rep(i,5*h) cin>>board[i%5][h-1-i/5];
		int ans=0;
		while(1){
			bool stop=1;
			for(int high=0;high<h;high++){
				int tmp=board[0][high],cnt=1;
				for(int wide=1;wide<5;wide++){
					if(board[wide][high]==tmp){
						cnt++;
						if(wide==4&&cnt>=3&&tmp!=0){
							//cout<<tmp<<" "<<cnt<<endl;
							ans+=tmp*cnt;
							cnt--;
							while(cnt>=0){
								board[wide-cnt][high]=0;
								cnt--;
							}
							stop=0;
						}
					}else{
						if(cnt>=3&&tmp!=0){
							//cout<<tmp<<" "<<cnt<<endl;
							ans+=tmp*cnt;
							while(cnt>0){
								board[wide-cnt][high]=0;
								cnt--;
							}
							stop=0;
						}else{
							tmp=board[wide][high]; cnt=1;
						}
					}
				}
			}
			if(stop) break;
			rep(i,5){
				for(int high=0;high<h-1;high++){
					for(int y=0;y<h-1;y++){
						if(board[i][y]==0){
						 	swap(board[i][y],board[i][y+1]);
						}
					}
				}
			}
			// rep(i,h){
			// 	rep(j,5){
			// 		cout<<board[j][i]<<" ";
			// 	}
			// 	cout<<endl;
			// }
		}
		cout<<ans<<endl;
	}

	return 0;
}

