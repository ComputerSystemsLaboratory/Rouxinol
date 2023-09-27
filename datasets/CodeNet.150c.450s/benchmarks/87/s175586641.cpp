#include <iostream>
using namespace std;
int h;
int field[15][5];
int changed[15][5];
int main(){
	while(1){
		cin >> h;
		if(h==0)break;
		int ans=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				cin >> field[i][j];
			}
		}
		while(1){
			bool ok=true;
			for(int i=0;i<h;i++){
				for(int j=0;j<3;j++){//起点として見るのは3番目までで良い
					if(field[i][j]==field[i][j+1]&&field[i][j]>0){
						int cnt=0;
						int copy=field[i][j];
						while(copy==field[i][j]&&j<5){
							cnt++;
							j++;
						}
						if(cnt>2){
							j-=cnt;
							for(int k=j;k<5;k++){
								if(copy==field[i][k]){
									changed[i][k]=1;
								}
								else break;
							}
							j+=cnt;
						}
						j--;
					}
				}
			}
			for(int i=0;i<h;i++){
				for(int j=0;j<5;j++){
					if(changed[i][j]==1){
						ok=false;
						ans+=field[i][j];
						for(int k=i;k>0;k--){
							field[k][j]=(field[k-1][j]>0?field[k-1][j]:0);
						}
						field[0][j]=0;
					}
				}
			}
			for(int i=0;i<h;i++){
				for(int j=0;j<5;j++){
					changed[i][j]=0;
				}
			}
			if(ok)break;
		}
		cout << ans << endl;
	}
	return 0;
}
