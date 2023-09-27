#include<iostream>
#include<string.h>

using namespace std;

int main(){
	while(1){
		int h;
		cin >> h;
		if(h == 0) break;
		
		int puzle[10][5];
		int reffer [10][5];
		memset(puzle,0,sizeof(puzle));
		
		for(int i=0;i < h;i++){
			for(int j = 0;j < 5;j++){
				cin >> puzle[i][j];
				reffer[i][j] = i;
			}
		}
		
		int point = 0;
		while(true){
			int lastpoint = point;
			for(int i=0;i < h;i++){
				for(int j = 0;j < 5;j++){
					if(reffer[i][j] == -1) continue;
					int k;
					int left = puzle[reffer[i][j]][j];
					for(k = 1;j+k < 5 && left == puzle[reffer[i][j+k]][j+k];k++){
						
					}
					if(k >= 3){
						point += k*left;
						for(int p = i;p >= 0;p--){
							for(int q = j;q < j+k;q++){
								if(p == 0){
									reffer[p][q] = -1;
								}
								else{
									reffer[p][q] = reffer[p-1][q];
								}
							}
						}
						j += k;
					}
				}
			}
			if(lastpoint == point) break;
		}
		cout << point << endl;
	}
	return 0;
}
