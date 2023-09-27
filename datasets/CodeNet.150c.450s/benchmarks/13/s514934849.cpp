#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int s_num[26];
int p_num[26];

int main()
{
		int i, j;
		char c;
		bool is=false;
		string s, p, comp;
		getline(cin, s);
		getline(cin, p);

		for (i = 0; i < s.size(); i++) {
				j = i;
				comp.clear();
				while (comp.size()!=p.size()) {
						comp += s[j]; 
						if (j==s.size()-1) j=-1;
						j++;
				}
				if (comp == p) {
						is = true; 
						break; 
				} else {
						is = false; 
				}
		} 
		if (is) cout << "Yes\n";
		else cout << "No\n";
}