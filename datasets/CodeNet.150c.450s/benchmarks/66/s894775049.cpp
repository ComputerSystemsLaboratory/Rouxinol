#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool find(vector<string>l,string s) {
	bool b = false;
	for (int i = 0; i < l.size(); i++){
		if (l[i] == s) {
			b = true;
			break;
		}
	}
	return b;
}
int main() {
	int n; cin >> n;
	vector<string>l;
	for (int i = 0; i < n; i++){
		string s; cin >> s;
		l.push_back(s);
	}
	cin >> n;
	bool b = false;//false->closed
	for (int i = 0; i < n; i++){
		string s; cin >> s;
		if (find(l,s) == true) {
			if (b){
				cout << "Closed by " << s << endl;
				b = false;
			}
			else{
				cout << "Opened by " << s << endl;
				b = true;
			}
		}
		else{
			cout << "Unknown " << s << endl;
		}
	}
	return 0;
}