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
		for(int k = 0; k < m; k++){
			cin >> h;
			s += s.substr(0,h);
			s.erase(0,h);
		}
		cout << s << endl;
	}
	return 0;
}