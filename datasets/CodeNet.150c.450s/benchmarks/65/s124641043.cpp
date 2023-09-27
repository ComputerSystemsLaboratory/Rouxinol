#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
#define MAX 100

using namespace std;
 
struct Card { char suit, value; };
 
void bubbleSort(struct Card C[], int N) {
  REP(i, N) {
    for (int j = N - 1; j >= i + 1; j--) {
      if (C[j].value < C[j - 1].value) {
        Card temp = C[j];
        C[j] = C[j - 1];
        C[j - 1] = temp;
      }
    }
  }
}
 
void selectionSort(struct Card C[], int N) {
  REP(i, N) {
    int minj = i;
    FOR(j, i, N) {
      if (C[j].value < C[minj].value) {
        minj = j;
      }
    }
    Card temp = C[i];
    C[i] = C[minj];
    C[minj] = temp;
  }
}
 
void print(struct Card C[], int N) {
  REP(i, N) {
    if (i > 0) cout << " ";
    cout << C[i].suit << C[i].value;
  }
  cout << endl;
}
 
bool isStable (struct Card C1[], struct Card C2[], int N) {
  REP(i, N) {
    if (C1[i].suit != C2[i].suit) {
      return false;
    }
  }
  return true;
}
   
   
int main() {
  Card C1[MAX], C2[MAX];
  int N;
   
  cin >> N;
  REP(i, N) {
    cin >> C1[i].suit >> C1[i].value;
    C2[i] = C1[i];
  }
 
  bubbleSort(C1, N);
  selectionSort(C2, N);
 
  print(C1, N);
  cout << "Stable" << endl;
  print(C2, N);
  if (isStable(C1, C2, N)) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }
 
  return 0;
}