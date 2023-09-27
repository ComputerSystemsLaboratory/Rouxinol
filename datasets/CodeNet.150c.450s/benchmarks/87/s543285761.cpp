#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
typedef long long ll;

int main(){
	int H;
	cin >> H;
	
	while(H!=0){
		int puzzle[12][5];
		rep(i,H){
			rep(j,5){
				cin >> puzzle[i][j];
			}
		}
		
		bool allign = true;
		
		int ans = 0;
		
		while (allign){
			//まず０のところを落とす。
			for (int i = H-2; i >= 0; --i) {
				rep(j,5){
					int temp = i;
					if(puzzle[i][j] != 0){
						while(puzzle[temp+1][j] == 0){
							puzzle[temp+1][j] = puzzle[temp][j];
							puzzle[temp][j] = 0;
							temp++;
							if(temp == H-1) break;
						}
					}
				}
			}
			
			allign = false;
			
			rep(i,H){
				int count = 1;
				int id = 0;
				rep(j,4){
					if(puzzle[i][j] == 0) {
						if(count < 3){
							count = 1;
							continue;
						}else{
							continue;
						}
					}
					if(puzzle[i][j] == puzzle[i][j+1]){
						count++;
						id = j+1;
					}
					if(puzzle[i][j] != puzzle[i][j+1]){
						if(count < 3){
							count = 1;
						}else{
							break;
						}
					}
				}
				if(count >= 3){
					allign = true;
					for (int j = id - count + 1; j <= id ; ++j) {
						ans += puzzle[i][j];
						puzzle[i][j] = 0;
					}
				}
			}
		}
		
		cout << ans << endl;
		
		cin >> H;
	}
	
    return 0;
}
