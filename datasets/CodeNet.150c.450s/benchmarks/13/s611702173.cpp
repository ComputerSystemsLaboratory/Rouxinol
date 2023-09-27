#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main(){
	string str1, str2; cin >> str1 >> str2;
	bool success = false;
	for (int i = 0; i < str1.size(); ++i){
		int j = 0;
		for (; j < str2.size(); ++j){
			int len = str1.size();
			if (i+j<len && str2[j] != str1[i+j]) break;
			else if (i + j >= len && str2[j] != str1[i + j - len]) break;
		}
		if (j == str2.size()) {
			success = true; break;
		}
	}
	if (success) cout << "Yes\n";
	else cout << "No\n";
}