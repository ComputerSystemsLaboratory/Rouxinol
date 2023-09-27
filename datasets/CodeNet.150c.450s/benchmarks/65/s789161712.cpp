#include <iostream>

using namespace std;

class Cards {
public:
  char m;
  int n;
};

int main(void) {
  int n, min, f=0;
  Cards b[36], s[36];
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> b[i].m >> b[i].n;
    s[i] = b[i];
  }
  for (int i=0; i<n-1; i++) {
    for (int j=n-1; j>i; j--) {
      if (b[j-1].n > b[j].n) {
        swap(b[j-1],b[j]);
      }
    }
  }
  for (int i=0; i<n; i++) {
    min = i;
    for (int j=i; j<n; j++) {
      if (s[j].n < s[min].n) {
        min = j;
      }
    }
    swap(s[i],s[min]);
  }
  for (int i=0; i<n; i++) {
    cout << (i==0?"":" ") << b[i].m << b[i].n << flush;
  }
  cout << endl;
  cout << "Stable" << endl;
  for (int i=0; i<n; i++) {
    if (b[i].m != s[i].m) {
      f=1;
    }
    cout << (i==0?"":" ") << s[i].m << s[i].n << flush;
  }
  cout << endl;
  if (f) {
    cout << "Not stable" << endl;
  } else {
    cout << "Stable" << endl;
  }
}