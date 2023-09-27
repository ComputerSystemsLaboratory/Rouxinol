#include <iostream>
#include <set>

#define REP(i, n) for (int i = 0; i < n; i++)

using namespace std;

string rev(string str){
	string ret="";
	int l = str.length();
	for (int i=l-1; i>=0; i--){
		ret += str[i];
	}
	//cerr << str << "->" << ret << endl;
	return ret;
}

int main() {
	int m;
	cin >> m;
	REP(z, m) {
		string str, l, r;
		int n;
		set<string> st;

		cin >> str;
		n = str.length();

		for (int i = 1; i <= n - 1; i++) {
			l = "";
			r = "";
			for (int j = 0; j < i; j++) {
				l += str[j];
			}
			for (int j = i; j < n; j++) {
				r += str[j];
			}
			//cerr << l << " " << r << " " << rev(l)+r <<  endl;
			
			st.insert(l+r);
			st.insert(rev(l)+r);
			st.insert(l+rev(r));
			st.insert(rev(l)+rev(r));
			
			st.insert(r+l);
			st.insert(rev(r)+l);
			st.insert(r+rev(l));
			st.insert(rev(r)+rev(l));
		}
		
		cout << st.size() << endl;
	}
	return 0;
}
