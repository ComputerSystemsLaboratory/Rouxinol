#include <iostream>
#include <string>
using namespace std;

int main(){
	bool flag = false;
	string s, p;
	cin >> s >> p;
	int a = s.size();
	s += s;
	for(int i=0;i<a;i++){
		if(s[i] == p[0]){
			for(int j=0;j<p.size();j++){
				if(s[i+j] != p[j]) break;
				if(j==p.size()-1) flag = true;
			}
		}
		if(flag) break;
	}
	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}