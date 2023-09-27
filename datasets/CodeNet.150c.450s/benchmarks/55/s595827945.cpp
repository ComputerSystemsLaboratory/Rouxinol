#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	int sum;
	string inp;
	ostringstream oss;
	while (true){
		cin >> inp;
		if (inp == "0"){
			break;
		}
		sum = 0;
		for (unsigned int i = 0; i < inp.length(); i++){
			sum += inp[i] - '0';
		}
		oss << sum << endl;
	}
	cout << oss.str();
}