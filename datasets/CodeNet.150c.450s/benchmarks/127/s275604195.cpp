#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <set>

using namespace std;
int main() {
	int n;
	cin >> n;
		string s,s1,s2;
	while( n > 0 ) { 
		typedef set <string> set_t;
		set_t A;
		cin >> s;
		for (int i = 0; i < s.length() - 1;i++) {
			s1 = s[0];
			s2 = s[i+1];
			for (int j = 1; j <= i; j++) {
				s1 = s1 + s[j];
			}
			for (int j = i + 2 ; j < s.length(); j++) {
				s2 = s2 + s[j];
			}
			A.insert(s1+s2);
			A.insert(s2+s1);
			reverse(s1.begin(), s1.end());
			A.insert(s1+s2);
			A.insert(s2+s1);
			reverse(s2.begin(), s2.end());
			A.insert(s1+s2);
			A.insert(s2+s1);
			reverse(s1.begin(), s1.end());
			A.insert(s1+s2);
			A.insert(s2+s1);
		}
		cout << A.size() << endl; 
		n = n-1;
		}
}