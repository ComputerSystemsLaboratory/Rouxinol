#include <iostream>
#include <string>
#include <vector>
using namespace std;

void trace(vector<string> a, int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (i != 0) cout << " ";
    cout << a[i];
  }
  cout << endl;
}

void arcopy(vector<string> in, vector<string> *out, int n) {
  int i;
  string s;
  for (i = 0; i < n; i++){
    s = in[i];
    out->at(i) = s;
  }
}

bool isStable(vector<string> in, vector<string> out, int n) {
  int i, j, a, b;
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      for (a = 0; a < n - 1; a++) {
        for (b = a + 1; b < n; b++) {
          if (in[i][1] == in[j][1] && in[i] == out[b] && in[j] == out[a]) {
            return false;
          }
        }
      }
    }
  }
  return true;
}

void bubbleSort(vector<string> *c, int n) {
  int i, j;
  string tmp;
  for (i = 0; i < n; i++) {
    for (j = n - 1; j > i; j--) {
      if (c->at(j)[1] < c->at(j-1)[1]) {
        tmp = c->at(j);
        c->at(j) = c->at(j-1);
        c->at(j-1) = tmp;
      }
    }
  }
}

void selectionSort(vector<string> *c, int n) {
  int i, j, minj;
  string tmp;
  for (i = 0; i < n; i++) {
    minj = i;
    for (j = i; j < n; j++) {
      if (c->at(j)[1] < c->at(minj)[1]) minj = j;
    }
    tmp = c->at(i);
    c->at(i) = c->at(minj);
    c->at(minj) = tmp;
  }
}

int main(void) {
  int i, n;
  string tmp;
  cin >> n;
  vector<string> a(n), bubarr(n), selarr(n);
  for (i = 0; i < n; i++) {
    cin >> tmp;
    a.at(i) = tmp;
  }
  arcopy(a, &bubarr, n);
  arcopy(a, &selarr, n);
  bubbleSort(&bubarr, n);
  trace(bubarr, n);
  if (isStable(a, bubarr, n)) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  selectionSort(&selarr, n);
  trace(selarr, n);
  if (isStable(a, selarr, n)) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  return 0;
}