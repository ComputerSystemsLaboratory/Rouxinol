// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0008&lang=jp

#include <iostream>
using namespace std;

int main() {
  int n ;
  while (cin >> n) {
    int count = 0;
    for (auto i=0; i<10; i++) {
      for (auto j=0; j<10; j++) {
	for (auto k=0; k<10; k++) {
	  for (auto l=0; l<10; l++) {
	    if (i+j+k+l == n) count++;
	  }
	}
      }
    }
    cout << count << endl;
  }
}