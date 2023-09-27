#include<iostream>
using namespace std;

int main(){
	int a[4], b[4];

	while(cin >> a[0]){
		for(int i = 1; i < 4; i++){
			cin >> a[i];
		}
		for(int i = 0; i < 4; i++){
			cin >> b[i];
		}

		int hit = 0, blo = 0;
		for(int i = 0 ; i < 4; i++){
			for(int j = 0; j < 4; j++){
				if(a[i] == b[j]){
					if(i == j){
						hit++;
					}
					else{
						blo++;
					}

				}
			}
		}

		cout << hit << " " << blo << endl;
	}

}