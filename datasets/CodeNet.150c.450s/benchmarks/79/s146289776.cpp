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
  int n, r;
  int c, p;
  int yama[51];
  queue<int> s;

  while (1) {
	cin >> n >> r;
	if (n == 0 && r == 0) break;

	for (int i = 0; i < n; i++) {
	  yama[i] = i + 1;
	}

	for (int i = 0; i < r; i++) {
	  cin >> p >> c;

	  for (int j = 0; j < c; j++) {
		s.push(yama[n - p - j]);
	  }

	  for (int j = n - p + 1; j < n; j++) {
		yama[j - c] = yama[j];
	  }

	  for (int j = 1; j <= c; j++) {
		yama[n - j] = s.front();
		s.pop();
	  }
	}
	cout << yama[n - 1] << endl;
  }
}