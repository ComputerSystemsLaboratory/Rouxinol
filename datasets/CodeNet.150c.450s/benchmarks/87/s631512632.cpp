#include<iostream>
#include<math.h>

using namespace std;

int h;
int field[15][5];
int changed[15][5];
int main(){
	while(1){
		int ans=0;
		cin >>h;
		if(h==0)break;
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				cin >> field[i][j];
			}
		}
		for(int i=0;i<15;i++){
			for(int j=0;j<5;j++){
				changed[i][j]=0;
			}
		}
		int b=0;
		while(1){
			b++;
			bool ok=true;
			for(int i=h-1;i>=0;i--){
				for(int j=0;j<3;j++){
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
							field[k][j]=(field[k-1][j]>0?field[k-1][j]:-1);
							
						}
						field[0][j]=0;
				
				}
			}
		}
		for(int i=0;i<12;i++){
			for(int j=0;j<5;j++){
				changed[i][j]=0;
			}
		}
		if(ok)break;
		}
		cout << ans << endl;
	}
}
