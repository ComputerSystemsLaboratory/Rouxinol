#include <iostream>
#include <string>
using namespace std;

int main(){
	string s, p, ss;
	bool flag = 0;
	//s = "sakanagapyonpyon";
	//p = "sakand";
	cin >> s >> p;
	ss = s + s;
	for (long i = 0; i < ss.size(); i++){
		if (ss[i] == p[0]){
			for (long j = 0; j < p.size(); j++){
				if (ss[i + j] != p[j]) break;
				if (j == p.size() - 1) flag = 1;
			}
			if (flag == 1) break;
		}
	}
	if (flag == 1) cout << "Yes" << endl;
	else cout << "No" << endl;
}