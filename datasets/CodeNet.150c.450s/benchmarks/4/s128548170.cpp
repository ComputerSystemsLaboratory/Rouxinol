#include <iostream>
using namespace std;

void Grading(int m, int f, int r) {
  int score = m + f;
  if(m == -1 || f == -1) {
	cout << "F" << endl;
  }
  else if(score >= 80) {
	cout << "A" << endl;
  }
  else if(score >= 65 && score < 80) {
	cout << "B" << endl;
  }
  else if(score >= 50 && score < 65) {
	cout << "C" << endl;
  }
  else if(score >= 30 && score < 50) {
	if(r >= 50) {
	  cout << "C" << endl;
	}
	else {
	  cout << "D" << endl;
	}
  }
  else {
	cout << "F" << endl;
  }
}

int main() {
  int m, f, r;
  while(cin >> m >> f >> r) {
	if(m == -1 && f == -1 && r == -1) {break;}
	Grading(m, f, r);
  }
  return 0;
}