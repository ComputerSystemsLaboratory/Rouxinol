#include <bits/stdc++.h>
using namespace std;

class Cards {
public:
  char m;
  int n;
};
int main() {
  int N;
  cin >> N;
  Cards b[N], s[N];
  for (int i=0; i<N; i++) {
    cin >> b[i].m >> b[i].n;
    s[i]=b[i];
  }
  for (int i=0; i<N-1; i++) {
    for (int j=N-1; j>i; j--) {
      if (b[j].n<b[j-1].n) {
        swap(b[j],b[j-1]);
      }
    }
  }
  int min;
  for (int i=0; i<N; i++) {
    min=i;
    for (int j=i; j<N; j++) {
      if (s[j].n<s[min].n) {
        min=j;
      }
    }
    swap(s[i],s[min]);
  }
  for (int i=0; i<N; i++) {
    cout << (i==0?"":" ") << b[i].m << b[i].n << flush;
  }
  printf("\n");
  printf("Stable\n");
  bool f=0;
  for (int i=0; i<N; i++) {
    if (b[i].m != s[i].m) {
      f=1;
    }
    cout << (i==0?"":" ") << s[i].m << s[i].n << flush;
  }
  printf("\n");
  if (f) {
    printf("Not stable\n");
  } else {
    printf("Stable\n");
  }
  return 0;
}