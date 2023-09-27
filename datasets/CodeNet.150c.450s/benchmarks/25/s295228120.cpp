#include <iostream>
//#include <iomanip>
//#include <vector>
#include <string>
//#include <algorithm>

using namespace std;

int main(){

	string in;
	int cnt[26];

	for (int i = 0; i < 26; i++){
		cnt[i] = 0;
	}

	while (1){
		getline(cin, in);
		if (in.empty()) break;

		for (int i = 0; i < in.size(); i++){
			for (int j = 0; j < 26; j++){
				if (in[i] == 'A' + j || in[i] == 'a' + j){
					cnt[j]++;
				}
			}
		}
	}

	for (int i = 0; i < 26; i++){
		cout << (char)('a' + i) << " : " << cnt[i] << endl;
	}


	return 0;
}