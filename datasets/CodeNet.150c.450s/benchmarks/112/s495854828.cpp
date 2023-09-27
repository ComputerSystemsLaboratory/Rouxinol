#include <iostream>
#include <string>
using namespace std;


int main(void){
	int n, m;
	cin >> n;
	while(n){
		char henkan[100][2];
		for(int i = 0; i < n; i++)
			cin >> henkan[i][0] >> henkan[i][1];
		cin >> m;
		char data;
		string moji;
		for(int i = 0; i < m; i++){
			cin >> data;
			for(int j = 0; j < n; j++){
				if(data == henkan[j][0]){
					data = henkan[j][1];
					break;
				}
			}
			moji += data;
		}

		cout << moji << endl;
		cin >> n;
	}
}