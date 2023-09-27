#include <iostream>
#include <string>
using namespace std;

char mcxi[4] = {'i', 'x', 'c', 'm'};
int a[4], b[4], c[5];
string s1, s2;

void print() {
  for (int i = 3; i >= 0; i--) {
    if (c[i] == 0) continue;
    if (c[i] == 1) cout << mcxi[i];
    else cout << c[i] << mcxi[i];
  }
  cout << endl;
}

void calcC() {
  for (int i = 0; i < 4; i++) {
    c[i + 1] = (a[i] + b[i] + c[i]) / 10;
    c[i] = (a[i] + b[i] + c[i]) % 10;
  }
}

void calcB() {
  for (int i = s2.length() - 1; i >= 0; i--) {
    for (int j = 0; j < 4; j++) {
      if (s2[i] == mcxi[j]) {
	if (i == 0) {
	  b[j] = 1;
	} else {
	  if ('2' <= s2[i - 1] && s2[i - 1] <= '9') {
	    b[j] = s2[i - 1] - '0';
	  } else {
	    b[j] = 1;
	  }
	}
      }
    }
  }
}

void calcA() {
  for (int i = s1.length() - 1; i >= 0; i--) {
    for (int j = 0; j < 4; j++) {
      if (s1[i] == mcxi[j]) {
	if (i == 0) {
	  a[j] = 1;
	} else {
	  if ('2' <= s1[i - 1] && s1[i - 1] <= '9') {
	    a[j] = s1[i - 1] - '0';
	  } else {
	    a[j] = 1;
	  }
	}
      }
    }
  }
}

void init() {
  for (int i = 0; i < 4; i++) {
    a[i] = 0;
    b[i] = 0;
    c[i] = 0;
  }
  c[4] = 0;
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    cin >> s1 >> s2;
    init();
    
    calcA();
    calcB();
    calcC();
    print();
  }
}