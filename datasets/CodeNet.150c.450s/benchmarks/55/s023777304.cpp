#include <iostream>

using namespace std;

const int dif = 'A' - 'a';

int main(){
	string num;
	int sum;
	while(cin >> num){
		if(num.size() == 1 && num[0] == '0') return 0;
		sum = 0;
		for(int i = 0; i < static_cast<int>(num.size()); i++){
			sum += num[i] - '0';
		}
		cout << sum << endl;
	}
}