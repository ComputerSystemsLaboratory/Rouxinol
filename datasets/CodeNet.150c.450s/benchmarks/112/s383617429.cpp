#include <iostream>
#include <string>
using namespace std;

int main(){

	while(true){
		int n;
		cin >> n;

		if(n == 0){
			break;
		}

		char* bef = new char[n];
		char* aft = new char[n];

		for(int i = 0; i < n; i++){
			cin >> bef[i] >> aft[i];
		}

		int nn;
		cin >> nn;
		char* moji = new char[nn];

		char* Moji = new char[nn];

		for(int i = 0; i < nn; i++){
			cin >> moji[i];
		}

		for(int i = 0; i < nn; i++){
			for(int j = 0; j < n; j++){
				if(moji[i] == bef[j]){
					moji[i] = aft[j];
					break;
				}
			}
			cout << moji[i];
		}
		cout << endl;

	}

}