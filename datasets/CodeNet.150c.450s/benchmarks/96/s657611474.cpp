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

char key[10][10] = {
  {},
  { 5, '.', ',', '!', '?', ' ' },
  { 3, 'a', 'b', 'c' },
  { 3, 'd', 'e', 'f' },
  { 3, 'g', 'h', 'i' },
  { 3, 'j', 'k', 'l' },
  { 3, 'm', 'n', 'o' },
  { 4, 'p', 'q', 'r', 's' },
  { 3, 't', 'u', 'v' },
  { 4, 'w', 'x', 'y', 'z' },
};

int main(void) {
  int n;
  string s;
  cin >> n;
  for (int i = 0; i < n; i++) {
	cin >> s;
	int k = 0, cnt = -1, d = 0;
	for (int j = 0; j < s.length(); j++) {
	  k = s[j] - '0';
	  if (k == 0) {
		if (d != 0) {
		  cout << key[d][cnt%key[d][0] + 1];
		}
		d = 0; cnt = -1;
	  }
	  else {
		d = k;
		cnt++;
	  }
	}
	cout << endl;
  }
}