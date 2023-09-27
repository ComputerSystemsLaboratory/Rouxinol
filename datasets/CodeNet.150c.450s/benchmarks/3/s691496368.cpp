#include<iostream>
#include<string>
using namespace std;
class trans {
	public:
	string str;
	void print(int a, int b) {
		for (int i = a; i < b + 1; i++){
			cout << str[i];
		}
		cout << endl;
	}
	void reverse(int a, int b){
		string s;
		for (int i = 0; i < b + 1 - a; i++){
			s += str[i + a];
		}
		for (int i = 0; i < b + 1 - a; i++) {
			str[i + a] = s[s.size() - i - 1];
		}
	}
	void replace(int a, int b, string s) {
		for (int i = 0; i < b + 1 - a; i++){
			str[i + a] = s[i];
		}
	}
};
int main() {
	trans t;
	cin >> t.str;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int a, b;
		string s;
		cin >> s >> a >> b;
		if (s == "print")
			t.print(a, b);
		else if (s == "reverse")
			t.reverse(a, b);
		else if (s == "replace"){
			cin >> s;
			t.replace(a, b, s);
		}
	}
	char c; cin >> c;
	return 0;
}