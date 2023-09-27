#include <algorithm>
#include <iostream>
using namespace std;
int main () {
  int H;
  cin >> H;
  int A[H+1];
  for (int i=1; i<H+1; i++) {
    cin >> A[i];
  }
  int P[H+1], L[H+1], R[H+1];
  for (int i=1; i<H+1; i++) {
    P[i] = i/2;
    L[i] = 2*i;
    R[i] = 2*i+1;
    if (P[i]>0) {
      if (L[i]<H+1) {
	if (R[i]<H+1) {
	  cout << "node " << i << ": key = " << A[i] << ", parent key = "<< A[P[i]] << ", left key = " << A[L[i]] << ", right key = " << A[R[i]] << ", " << endl;
	}
	else {
	  cout << "node " << i << ": key = " << A[i] << ", parent key = "<< A[P[i]] << ", left key = " << A[L[i]] << ", " << endl;
	}
      }
      else {
	cout << "node " << i << ": key = " << A[i] << ", parent key = "<< A[P[i]] << ", " << endl;
      }
    }
    else if (L[i]<H+1) {
	if (R[i]<H+1) {
	  cout << "node " << i << ": key = " << A[i] << ", left key = " << A[L[i]] << ", right key = " << A[R[i]] << ", " << endl;
	}
	else {
	  cout << "node " << i << ": key = " << A[i] << ", left key = " << A[L[i]] << ", " << endl;
	}
    }
    else {
      cout << "node " << i << ": key = " << A[i] << ", " << endl;
    }
  }
}
  