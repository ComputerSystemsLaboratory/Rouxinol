#include <iostream>
using namespace std;
int main(){
	int a[4],b[4];
	while(cin >> a[0]){
		int hit = 0,brow = 0;
		for(int i = 1; i < 4; i++){
			cin >> a[i];
		}
		for(int i = 0; i < 4; i++){
			cin >> b[i];
		}
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 4; j++){
				if(a[i] == b[j]){
					i == j? hit++ : brow++;
				}
			}
		}
		cout << hit << " " << brow << endl;
	}
	return 0;
}