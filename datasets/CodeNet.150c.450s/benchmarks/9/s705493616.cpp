#include <string>
#include <iostream>
using namespace std;

int main (){
	while(1){
		string input = "";
		int m = 0;
		cin >> input;
		if(input == "-") break;
		cin >> m;

		int *H = new int[m]();
		for(int i=0; i<m; i++){
			cin >> H[i];
		}

		for(int i=0; i<m; i++){
			input = input.substr(H[i]) + input.substr(0, H[i]);
		}
		cout << input << endl;
	}

	return 0;
}