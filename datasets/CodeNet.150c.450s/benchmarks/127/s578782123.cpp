#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main(){
	
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		set<string> s;
		string str;
		cin >> str;
		for(int j = 1; j < str.size(); j++){
			string prv = str.substr(0,j);
			string nxt = str.substr(j);

			string bprv = prv;
			string bnxt = nxt;
			reverse(bprv.begin(),bprv.end());
			reverse(bnxt.begin(),bnxt.end());

			s.insert(prv+nxt);
			s.insert(bprv+nxt);
			s.insert(prv+bnxt);
			s.insert(bprv+bnxt);

			s.insert(nxt+prv);
			s.insert(nxt+bprv);
			s.insert(bnxt+prv);
			s.insert(bnxt+bprv);
		}
		cout << s.size() << endl;
	}

	return 0;
}