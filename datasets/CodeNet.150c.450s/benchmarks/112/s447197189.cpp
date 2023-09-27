#include <iostream>
using namespace std;

int main(){
	int n = 0;
	while(cin >> n && n){
		int m = 0, henkan[10000] = {};
		char in, iin;
		for(int i = 0; i < n; i++){
			cin >> in >> iin;
			int ctoi = in, ctoii = iin;
			henkan[ctoi] = ctoii;
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> in;
			int ctoi = in;
			if(henkan[ctoi])
				ctoi = henkan[ctoi];
			cout << (char)ctoi;
		}
		cout << endl;
	}
}