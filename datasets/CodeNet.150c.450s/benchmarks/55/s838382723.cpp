#include <iostream>
#include <string>

using namespace std;

int main(){
	string x;
	
	while(1){
		cin >> x;
		if(x == "0") break;
		int n = 0;
		for(int i = 0;x[i];i++){
			n += x[i] - '0';
		}
		cout << n << endl;
	}
	return 0;
}