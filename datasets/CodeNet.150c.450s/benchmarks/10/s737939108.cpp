#include <iostream>
using namespace std;

int main(){
	int n, a[4][3][10]{};
	cin >> n;
	while(n--){
		int b, f, r, v;
		cin >> b >> f >> r >> v;
		a[--b][--f][--r] += v;
	}
	for(int i = 0; i < 4; i++){
		if(i) cout << string(20, '#') << endl;
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++) cout << ' ' << a[i][j][k];
			cout << endl;
		}
	}
}