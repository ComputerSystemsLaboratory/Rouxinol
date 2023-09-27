#include<iostream>

using namespace std;

int main(){
    while(1){
        int h;
        cin >> h;
        if(h==0) break;
        int pt = 0;
        int a[h+1][5];
        for(int i = 1; i <= h; i++){
				for(int j = 0; j < 5; j++){
					cin >> a[i][j];
				}
			}
			bool flg = true;
			while(flg){
				flg = false;
				for(int i = 1; i <= h; i++){
					for(int j = 0; j < 3; j++){
						int count = 1;
						for(int k = j + 1; k < 5; k++){
							if(a[i][j] > 0 && a[i][j] == a[i][k]){
								count += 1;
							}else{
								break;
							}
						}
						if(count > 2){
							flg = true;
							pt += a[i][j] * count;
							for(int k = j; k < j + count; k++){
								for(int l = i; l > 0; l--){
									a[l][k] = a[l - 1][k];
								}
							}
							break;
						}
					}
				}
				
			}
            cout << pt << endl;
    }
}
