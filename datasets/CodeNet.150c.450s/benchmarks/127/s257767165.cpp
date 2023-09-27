#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m;
	cin >> m;
	while (m--){
		string str;
		cin >> str;
		set<string> s;
		for (int i = 1; i < str.size(); i++){
			string a(str, 0, i);
			string b = a;
			reverse(b.begin(), b.end());
			string c(str, i, str.size() - i);
			string d = c;
			reverse(d.begin(), d.end());
			
			//cout << a << " " << b << " " << c << " " << d << endl;
			
			s.insert(a + c);
			s.insert(a + d);
			s.insert(b + c);
			s.insert(b + d);
			s.insert(c + a);
			s.insert(d + a);
			s.insert(c + b);
			s.insert(d + b);
		}
		cout << s.size() << endl;
	}
	
	return 0;
}