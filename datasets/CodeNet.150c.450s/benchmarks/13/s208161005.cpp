#include <iostream>

using namespace std;

int main(){
	string s, p;
	getline(cin, s);
	getline(cin, p);

	int ssize, psize, si = 0, pi = 0;
	ssize = static_cast<int>(s.size());
	psize = static_cast<int>(p.size());
	while(si < ssize + psize){
		int i = si < ssize ? si : si - ssize;
		if(s[i] == p[pi]){
			if(pi == psize-1){
				cout << "Yes" << endl;
				return 0;
			}
			pi++;
		}else{
			si -= pi;
			pi = 0;
		}
		si++;
	}

	cout << "No" << endl;

	return 0;
}