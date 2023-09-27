#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int ch[26];
int main(){
	while (true){
		string str = "";
		getline(cin, str); if (str == "") break;
		for (int i = 0; i < str.size(); ++i){
			char tmp; tmp = str[i];
			if (isupper(tmp)) tmp = tolower(tmp);
			if (0 <= tmp - 'a' && tmp - 'z' <= 0) ++ch[tmp - 'a'];
		}
	}
	for (int i = 0; i < 26; ++i){
		char tmp; tmp = 'a' + i;
		cout << tmp << " : " << ch[i] << '\n';
	}
}