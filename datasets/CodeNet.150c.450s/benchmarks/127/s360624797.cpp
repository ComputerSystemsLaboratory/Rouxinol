#include<iostream>
#include<string>
#include<set>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	string tmp, f, b, revf,revb;
	set<string> s;
	cin >> n;
	while (n--) {
		s.clear();
		cin >> tmp;
		for (int i = 1; i < tmp.size(); i++) {
			f = revf = tmp.substr(0, i);
			b = revb = tmp.substr(i);
			
			reverse(revf.begin(), revf.end());
			reverse(revb.begin(), revb.end());
			
			s.insert(f + b);
			s.insert(b + f);
			s.insert(revf + b);
			s.insert(b + revf);
			s.insert(f + revb);
			s.insert(revb + f);
			s.insert(revf + revb);
			s.insert(revb + revf);
		}
		cout << s.size() << endl;
	}
	
	return 0;
}