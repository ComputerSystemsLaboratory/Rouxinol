#include <iostream>
#include <cassert>
#include <queue>

#define INF 922337203685477580
typedef long long ll;

using namespace std;

int main() {
  int N;
  cin >> N;

  int V[N];  // numeric value
  char C[N];  // character

  for (int i = 0; i < N; i++) {
    cin >> C[i];
    cin >> V[i];
  }

  int V_b[N];   // copy for bubble sort
  char C_b[N];
  for (int i = 0; i < N; i++) {
    V_b[i] = V[i];
    C_b[i] = C[i];
  }

  int V_s[N];   // copy for selection sort
  char C_s[N];
  for (int i = 0; i < N; i++) {
    V_s[i] = V[i];
    C_s[i] = C[i];
  }


  // do bubble sort
  for (int i = 0; i < N; i++) {
    for (int j = N - 1; j > i; j--) {
      if (V_b[j] < V_b[j - 1]) {
        int t = V_b[j];
        V_b[j] = V_b[j - 1];
        V_b[j - 1] = t;

        char c = C_b[j];
        C_b[j] = C_b[j - 1];
        C_b[j - 1] = c;
      }
    }
  }

  // output the result of bubble sort
  for (int i = 0; i < N; i++) {
    if (i > 0) {
      cout << " ";
    }
    cout << C_b[i] << V_b[i];
  }
  cout << endl;

  // bubble sort is always stable
  cout << "Stable" << endl;


  // do selection sort
  for (int i = 0; i < N; i++) {
    int mini = i;
    for (int j = i; j < N; j++) {
      if (V_s[j] < V_s[mini]) {
        mini = j;
      }
    }

    if (mini != i) {
      int t = V_s[i];
      V_s[i] = V_s[mini];
      V_s[mini] = t;

      char c = C_s[i];
      C_s[i] = C_s[mini];
      C_s[mini] = c;
    }
  }

  // output the result of selection sort
  for (int i = 0; i < N; i++) {
    if (i > 0) {
      cout << " ";
    }
    cout << C_s[i] << V_s[i];
  }
  cout << endl;

  // bubble sort is always stable
  for (int i = 0; i < N; i++) {
    if (C_b[i] != C_s[i]) {
      cout << "Not stable" << endl;
      return 0;
    }
  }
  cout << "Stable" << endl;
  return 0;
}