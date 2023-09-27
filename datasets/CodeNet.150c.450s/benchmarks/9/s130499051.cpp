#include <iostream>
#include <string>
using namespace std;

int main(){
	int m;
	string s;
	int h;
	while(1){
		cin >> s;
		if(s == "-") break;
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> h;
			for(int k = 0; k < h; k++){
				s += s[0];
				s.erase(0,1);
			}
		}
		cout << s << endl;
	}
	return 0;
}