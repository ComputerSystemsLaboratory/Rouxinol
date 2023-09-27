#include<bits/stdc++.h>
using namespace std;

int main(){
	int H, h[11][6];
	
	while(1){
		int count, ans = 0, t, t2;
		cin>>H;
	
		if(H == 0) break;

		for(int i = 0; i < H; i++){
			for(int j = 0; j < 5; j++){
				cin>>h[i][j];
			}
		}
		
		while(1){
			count = 0;
			for(int i = 0; i < H; i++){
				for(int j = 0; j < 3;j++){
					if(h[i][j] == h[i][j + 1] && h[i][j] == h[i][j + 2] && h[i][j] < 10  && h[i][j] != 0){
						count++;
						if(j < 2 && h[i][j] == h[i][j + 3]){
							if(j < 1 && h[i][j] == h[i][j + 4]){
								h[i][j] *= 10;
								h[i][j + 1] *= 10;
								h[i][j + 2] *= 10;
								h[i][j + 3] *= 10;
								h[i][j + 4] *= 10;
							} else{
								h[i][j] *= 10;
								h[i][j + 1] *= 10;
								h[i][j + 2] *= 10;
								h[i][j + 3] *= 10;

							}
						} else {
							h[i][j] *= 10;
							h[i][j + 1] *= 10;
							h[i][j + 2] *= 10;
						}
						
					}
						
					
					
				}
			}
			if(count == 0) break;

			for(int i = 0; i  < H; i++){
				t = 0;
				for(int j = 0; j < 5; j++){
					if(h[i][j] >= 10){
						t++;
					}
				}
				if(t != 0) ans += h[i][2] * t * 0.1;
				
			}
			for(int i = H - 1; i > 0;){
				t2 = 0;
				for(int j = 0; j < 5; j++){
					if(h[i][j] >= 10) {
						t2++;
						for(int k = i; k > 0 ; k--){
							h[k][j] = h[k - 1][j];
						}
						h[0][j] = 0;
					}
				}
				if(t2 == 0) i--;
				
			}
		
		}

		
		cout<<ans<<endl;
	}

	return 0;
}

