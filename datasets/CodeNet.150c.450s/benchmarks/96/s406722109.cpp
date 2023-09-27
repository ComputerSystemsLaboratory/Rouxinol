#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string m;
	string word[] = { ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> m;
		int btn = 0;
		int cnt = 0;
		for (int j = 0; j < m.length(); j++){
			if (m[j] != '0'){
				btn = (int)(m[j] - '0');
				cnt++;
				switch (btn){
					case 1:
						if (cnt > 5){
							cnt = 1;
						}
						break;
					case 7:
					case 9:
						if (cnt > 4){
							cnt = 1;
						}
						break;
					case 2:
					case 3:
					case 4:
					case 5:
					case 6:
					case 8:
						if (cnt > 3){
							cnt = 1;
						}
						break;
				}
			}
			else{
				if (cnt > 0){
					cout << word[btn - 1][cnt-1];
					cnt = 0;
				}
			}
		}
		cout << endl;
	}
}