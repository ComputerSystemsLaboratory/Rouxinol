#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<set>
#include<functional>
using namespace std;

#define INF 1<<21
#define MOD 1000000007

int main(void) {
  int n;
  string s,str1,str2;
  string s1, s2;
  set<string> S;
  cin >> n;

  for (int i = 0; i < n; i++) {
	S.clear();
	cin >> s;
	for (int j = 1; j < s.length(); j++) {
	  str1 = s.substr(0, j);
	  str2 = s.substr(j, s.length());
	  s1 = "";
	  s2 = "";
	  for (int k = str1.length() - 1; k >= 0; k--) {
		s1 += str1[k];
	  }
	  for (int k = str2.length() - 1; k >= 0; k--) {
		s2 += str2[k];
	  }
	  S.insert(str1 + str2);
	  S.insert(s1 + str2);
	  S.insert(str1 + s2);
	  S.insert(s1 + s2);
	  S.insert(str2 + str1);
	  S.insert(s2 + str1);
	  S.insert(str2 + s1);
	  S.insert(s2+ s1);
	}
	cout << S.size() << endl;
  }
}