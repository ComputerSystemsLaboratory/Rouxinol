#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int h, ans, hoge,count;
	int table[10][5];
	bool b[5];

	while(1){
		scanf("%d", &h);
		if(h==0) break;

		ans=0;

		for(int i=0; i<h; i++){
			for(int j=0; j<5; j++){
				scanf("%d", &table[i][j]);
			}
		}

		hoge =0;
		while(1){
			for(int i=0; i<h; i++){
				fill(b, b+5, false);
				count=0;
				if(table[i][2]==0) continue;
				if(table[i][2] == table[i][1]){
					b[1]=true;
					count++;
					if(table[i][2] ==table[i][0]){
						b[0]=true;
						count++;
					}
				}
				if(table[i][2] == table[i][3]){
					b[3]=true;
					count++;
					if(table[i][2] ==table[i][4]){
						b[4]=true;
						count++;
					}
				}

				if(count>=2){
					b[2] = true;
					count++;
					ans += (table[i][2]*count);

					for(int j=0; j<5; j++){
						if(b[j]==true){
							table[i][j]=0;
						}
					}
				}
			}//endfor

			if(hoge == ans) break;
			hoge = ans;

			for(int i=0; i<h; i++){
				for(int j=0; j<5; j++){
					if(table[i][j] == 0){
						for(int k =i; k>0; k--){
							int tmp;
							tmp =table[k-1][j];
							table[k-1][j] = table[k][j];
							table[k][j] = tmp;
						}
					}
				}
			}

		}//endwhile

		printf("%d\n", ans);
	}//endwhile

	return 0;
}
