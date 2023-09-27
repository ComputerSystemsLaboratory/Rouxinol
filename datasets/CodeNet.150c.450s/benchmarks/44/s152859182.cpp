#include <iostream>
using namespace std;

int main(){
	int k = 0;
	int a[4], b[4];
	int hitto[1000] = {0}, buro[1000] = {0};
	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
		for(int i = 0; i < 4; i++){
			if(a[i] == b[i]){
				hitto[k]++;
			}
		}
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 4; j++){
				if(a[i] == b[j]){
					buro[k]++;
				}
			}
		}
		buro[k] = buro[k]-hitto[k];
		k++;
	}
	for(int i = 0; i < k; i++){
		cout << hitto[i] << " " << buro[i] << endl;
	}
}