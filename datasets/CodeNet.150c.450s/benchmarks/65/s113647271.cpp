#include <iostream>
using namespace std;

void bubbleSort(string C[], int N) {
  for (int i = 0; i < N - 1; i++) {
    for (int j = N - 1; j >= i + 1; j--) {
      if (C[j - 1][1] > C[j][1]) {
        swap(C[j - 1], C[j]);
      }
    }
  }
}

void selectionSort(string C[], int N) {
  for (int i = 0; i < N - 1; i++) {
    int min_idx = i;
    for (int j = i + 1; j < N; j++) {
      if (C[j][1] < C[min_idx][1]) {
        min_idx = j;
      }
    }
    swap(C[i], C[min_idx]);
  }
}

bool Stable(string Ci[], string Co[], int N) {
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      if (Ci[i][1] != Ci[j][1]) continue;
      for (int a = 0; a < N - 1; a++) {
        for (int b = a + 1; b < N; b++) {
          if (Ci[j] == Co[a] && Ci[i] == Co[b]){
            return false;
          }
        }
      }
    }
  }
  return true;
}

int main() {
  int N;
  string Cards[40], C1[40], C2[40];
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> Cards[i];
    C2[i] = C1[i] = Cards[i];
  }

  bubbleSort(C1, N);
  for (int i = 0; i < N; i++) {
    if (i) cout << " ";
    cout << C1[i];
  }
  cout << endl;
  cout << (Stable(Cards, C1, N) ? "Stable" : "Not stable") << endl;
  
  selectionSort(C2, N);
  for (int i = 0; i < N; i++) {
    if (i) cout << " ";
    cout << C2[i];
  }
  cout << endl;
  cout << (Stable(Cards, C2, N) ? "Stable" : "Not stable") << endl;
  
  return 0;
}
