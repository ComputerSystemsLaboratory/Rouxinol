#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int main() {
	int N;
	cin >> N;
	
	set< string > s;
	
	for_(i,0,N) {
		string str;
		cin >> str;
		s.insert(str);
	}
	
	int M;
	cin >> M;
	
	bool openf = false;
	
	for_(i,0,M) {
		string str;
		cin >> str;
		
		if (s.count(str)) {
			cout << (openf ? "Closed by " : "Opened by ") << str << endl;
			openf = !openf;
		} else {
			cout << "Unknown " << str << endl;
		}
	}
}