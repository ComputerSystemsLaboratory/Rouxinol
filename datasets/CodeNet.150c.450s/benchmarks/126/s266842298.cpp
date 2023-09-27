#include<iostream>

using namespace std;

int main()
{
	for(;;){
		int h, w;
		int n;
		
		int ban[100][100] = {0};
		int cant_xy[100][2];
		bool flg = false;
			
		cin >> w >> h;
		if(w == 0){
			break;
		}
		
		
		cin >> n;
		
		ban[0][0] = 1;
		
		for(int i = 0; i < n; i++){
			cin >> cant_xy[i][0] >> cant_xy[i][1];
		}
		
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				for(int k = 0; k < n; k++){
					if(i == cant_xy[k][1]-1 && j == cant_xy[k][0]-1){
						flg = true;
						break;
					}
				}
				if(flg != true){
					ban[i+1][j] += ban[i][j];
					ban[i][j+1] += ban[i][j];
				}
				flg = false;
			}
		}
		
		/*
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				printf("%d ",ban[i][j]);
			}
			cout << endl;
		}
		*/
		
		cout << ban[h-1][w-1] << endl;
	}
}