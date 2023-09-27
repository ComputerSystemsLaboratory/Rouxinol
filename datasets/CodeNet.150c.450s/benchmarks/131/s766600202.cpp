#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

string sub(const string& a, const string& b){
	string s = "";
	char c = 0;
	int l = a.length();
	for(int i = 1;i <= l;++i){
		char res = a[l - i] - b[l - i] - c;
		if(res < 0){
			res += 10;
			c = 1;
		}
		else{
			c = 0;
		}
		res += '0';
		s.insert(0, 1, res);
	}
	return s;
}

int main(){
	int n, c;
	string s;
	while(cin >> s >> n, n){
		c = 0;
		map<string, int> m;
		if(s.length() != n){
			int d = n - s.length();
			for(int i = 0;i < d;++i){
				s.insert(0, "0");
			}
		}
		string r = s, b, l;
		while(m.find(r) == m.end()){
			m[r] = c;
			b = r; l = r;
			sort(b.begin(), b.end(), greater<char>());
			sort(l.begin(), l.end());
			r = sub(b, l);
			++c;
		}
		cout << m[r] << " " << stoi(r) << " " << c - m[r] << endl;
	}
}