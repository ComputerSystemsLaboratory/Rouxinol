#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;cin >> n;
	string s, str;
	map<string, int> m;
	for(int i = 0;i < n;i++){
		cin >> s >> str;
		if(s[0] == 'i'){
			m[str] = 1;
		}else{
			if(m[str])cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
	return 0;
}