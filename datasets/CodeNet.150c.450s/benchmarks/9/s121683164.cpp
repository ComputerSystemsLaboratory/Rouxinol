#include <iostream>
#include <string>

using namespace std;

int main(){	
	string input;
	cin >> input;
	
	while(input != "-"){
		int m,b;
		cin >> m;
		for(int i=0; i<m; ++i){
			cin >> b;
			input = input + input.substr(0,b);
			input = input.erase(0,b);
		}
		
		cout << input << endl;
		cin >> input;
	}
}
