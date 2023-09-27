#include <iostream>
using namespace std;


int a[4];
int b[4];
int hit = 0;
int blow = 0;


void solve(){
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			if (b[i] == a[j] && i == j){
				hit++;
				break;
			}
			if (b[i] == a[j]){
				blow++;
				break;
			}
		}
	}
}


int main(){
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
		solve();
		cout << hit << ' ' << blow << endl;
		hit = 0;
		blow = 0;
	}

	return 0;
}