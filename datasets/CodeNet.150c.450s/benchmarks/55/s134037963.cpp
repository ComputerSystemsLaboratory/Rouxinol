#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main(){
	while (true){
		string str; cin >> str;
		if (str == "0") break;
		int sum = 0;
		for (int i = 0; i < str.size(); ++i){
			char ch = str[i];
			sum += (ch - '0');
		}
		cout << sum << '\n';
	}
}