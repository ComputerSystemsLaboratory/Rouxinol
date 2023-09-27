#include <bits/stdc++.h>
using namespace std;

bool ok(string s, string p){
	for(int i=0; i < s.length(); i++){
		bool flag = true;
		for(int j=0; j < p.length(); j++)
			if(s[(i+j)%(s.length())] != p[j])
				flag = false;

		if(flag == true) return true;
	}
	return false;
}


int main(){

	string s; cin >> s;
	string p; cin >> p;

	cout << (ok(s, p)? "Yes": "No") << endl;

	return 0;
}