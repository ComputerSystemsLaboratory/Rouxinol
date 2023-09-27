#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string s;
	//s = "vwxyz";
	while (cin >> s){
		if (s == "-") break;
		long n;
		n = s.size();
		string t(n, '-');
		long m;
		//m = 3;
		cin >> m;
		long cnt = 0;
		long hm = 0;
		for (long i = 0; i < m; i++){
			cin >> hm;
			cnt += hm;
		}
		cnt = cnt % n;
		for (long i = 0; i < n; i++){
			if (i < n - cnt) t[i] = s[i + cnt];
			else t[i] = s[i - n + cnt];
		}
		for (long i = 0; i < n; i++){
			cout << t[i];
		}
		cout << endl;
	}
	return 0;
}