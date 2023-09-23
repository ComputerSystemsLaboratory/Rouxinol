#include <iostream>
#include <string>
using namespace std;

int main(void){
		int n,r,number;
		int	a[4][13];
		char R;
		
		//配列初期化
		for(int i = 0;i < 4;i++){
				for(int j = 0;j < 13;j++){
						a[i][j] = 0;
					
				}
		}
		cin >> n;
		for(int m = 0; m < n;m++){
			cin >> R >> number;
				if(R == 'S'){
						r = 0;
				}else if(R == 'H'){
						r = 1;
				}else if(R == 'C'){
						r = 2;
				}else if(R == 'D'){
						r = 3;
				}
		
			a[r][number - 1] = 1;
		}

		for(int i = 0;i < 4;i++){
			for(int j = 0;j < 13;j++){
					if(a[i][j] != 1){
							if(i == 0) R = 'S';
							if(i == 1) R = 'H';
							if(i == 2) R = 'C';
							if(i == 3) R = 'D';
				    		cout << R << " " << j + 1 << endl;				
					}
			}
		}
		return 0;
}