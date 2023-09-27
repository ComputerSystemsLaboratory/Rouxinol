#include<string>
#include<iostream>
#include<set>

using namespace std;


string rev(string& s) {
	string ns;
	for (auto itr = s.rbegin(); itr != s.rend(); ++itr) {
		ns.push_back(*itr);
	}
	return ns;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		set<string> st;
		string s;
		cin >> s;
		for (int j = 0; j < s.size() - 1; j++) {
			string ls;
			for (int k = 0; k <= j; k++) {
				ls.push_back(s[k]);
			}
			string rs;
			for (int k = s.size()-1; k >j; k--) {
				rs.push_back(s[k]);
			}
			string ns1 = ls; ns1 += rs; st.insert(ns1);
			ns1 = ls; ns1 += rev(rs); st.insert(ns1);
			ns1 = rev(ls); ns1 += rs; st.insert(ns1);
			ns1 = rev(ls); ns1 += rev(rs); st.insert(ns1);
			ns1 = rs; ns1 += ls; st.insert(ns1);
			ns1 = rs; ns1 += rev(ls); st.insert(ns1);
			ns1 = rev(rs); ns1 += ls; st.insert(ns1);
			ns1 = rev(rs); ns1 += rev(ls); st.insert(ns1);
		}
		cout << st.size() << endl;
	}
	return 0;
}