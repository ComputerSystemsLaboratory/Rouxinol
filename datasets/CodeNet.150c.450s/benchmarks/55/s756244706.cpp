#include <iostream>
using namespace std;
int main(void){
	char x[1001];
	string s;
	while(1){
		cin >> s;
		for(int a = 0; a < s.size();a++){
			x[a] = s.at(a);
		}
		if(x[0] == '0') break;
		int sum = 0;
		for(int i = 0; i < s.size(); i++){
			sum += (x[i] - '0');
		}
		cout << sum <<endl;
	}
	return 0;
}

