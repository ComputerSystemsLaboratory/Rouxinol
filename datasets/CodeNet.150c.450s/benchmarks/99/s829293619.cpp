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

int main() {
  int n;
  string s1, s2;
  int x, y;
  int mul;
  cin >> n;
  for (int i = 0; i < n; i++) {
	x = 0; y = 0;
	cin >> s1 >> s2;
	int kk = 1;
	for (int j = 0; j < s1.length(); j++) {
	  switch (s1[j]) {
	  case 'm':
		x += 1000*kk;
		kk = 1;
		break; 
	  case 'c':
		x += 100*kk;
		kk = 1;
		break;
	  case 'x':
		x += 10 * kk;
		kk = 1;
		break;
	  case 'i':
		x += kk;
		kk = 1;
		break;
	  default:kk = s1[j] - '0';
	  }
	}
	kk = 1;
	for (int j = 0; j < s2.length(); j++) {
	  switch (s2[j]) {
	  case 'm':
		x += 1000 * kk;
		kk = 1;
		break;
	  case 'c':
		x += 100 * kk;
		kk = 1;
		break;
	  case 'x':
		x += 10 * kk;
		kk = 1;
		break;
	  case 'i':
		x += kk;
		kk = 1;
		break;
	  default:kk = s2[j] - '0';
	  }
	}
	int o, p;
	o = (x + y) / 1000;
	if (o>1)cout << o << "m";
	if (o == 1)cout << "m";
	o = (x + y) % 1000;
	p = o / 100;
	if (p>1)cout << p << "c";
	if (p == 1)cout << "c";
	p = o % 100;
	o = p / 10;
	if (o>1)cout << o << "x";
	if (o == 1)cout << "x";
	o = (x + y) % 10;
	p = o / 1;
	if (p>1)cout << p << "i";
	if (p == 1)cout << "i";
	cout << endl;
  }
}