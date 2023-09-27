#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	string str[256];
	for(int i = 0; i < n; i++){
		cin >> str[i];
	}
	int m;
	cin >> m;
	int cnt=0;
	for(int j = 0; j < m; j++){
		string str2;
		cin >> str2;
		for(int k = 0; k < n; k++){
			if(str[k] == str2){
				cnt++;
				if(cnt % 2 == 1) cout << "Opened by " << str2 << endl;
				else cout << "Closed by " << str2 << endl;
				break;
			}
			if(k == n-1){
				cout << "Unknown " << str2 << endl;
			}
		}
	}
	return 0;
}