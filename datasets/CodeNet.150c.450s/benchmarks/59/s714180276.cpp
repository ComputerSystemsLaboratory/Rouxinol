#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  int N;
  int *din;

  // data in
  cin >> N;
  din = new int[N];
  for (int i=0; i<N; i++) {
    cin >> din[i];
  }

  for (int i=0;i<N;i++) {
    cout << din[i];
    if (i+1<N) cout << " "; else cout << endl;
  }

  // sort
  for (int i=1;i<N;i++) {
    int v = din[i];
    int j = i-1;
    while (j>=0 && din[j]>v) {
      din[j+1]=din[j];
      j--;
    }
    din[j+1]=v;
    
    for (int i=0;i<N;i++) {
      cout << din[i];
      if (i+1<N) cout << " "; else cout << endl;
    }
  }
  delete din;
}