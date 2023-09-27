#include <iostream>
#include <string>
#include <cstring>

using namespace std;
string toLower(string str){
	for (int i = 0; i < str.size(); ++i){
		if (isupper(str[i])) str[i] = tolower(str[i]);
	}
	return str;
}
int main(){
	string str; cin >> str;
	str = toLower(str);
	int sum = 0; string tmp;
	while (true){
		cin >> tmp; if (tmp == "END_OF_TEXT") break;
		tmp = toLower(tmp);
		if (tmp == str) ++sum;
	}
	cout << sum << '\n';
}