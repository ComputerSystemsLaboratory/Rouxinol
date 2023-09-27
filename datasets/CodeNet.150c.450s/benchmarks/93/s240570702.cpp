#include <bits/stdc++.h>
using namespace std;
int partition(vector<char> &S, vector<int> &V, int p, int r){
  int x = V[r];
  int i = p - 1;
  for (int j = p; j < r; j++){
    if (V[j] <= x){
      i++;
      swap(S[i], S[j]);
      swap(V[i], V[j]);
    }
  }
  swap(S[i + 1], S[r]);
  swap(V[i + 1], V[r]);
  return i + 1;
}
void quicksort(vector<char> &S, vector<int> &V, int p, int r){
  if (p < r){
    int q = partition(S, V, p, r);
    quicksort(S, V, p, q - 1);
    quicksort(S, V, q + 1, r);
  }
}
int main(){
  int n;
  cin >> n;
  vector<char> S(n);
  vector<int> V(n);
  for (int i = 0; i < n; i++){
    cin >> S[i] >> V[i];
  }
  map<int, queue<char> > M;
  for (int i = 0; i < n; i++){
    M[V[i]].push(S[i]);
  }
  quicksort(S, V, 0, n - 1);
  bool stable = true;
  for (int i = 0; i < n; i++){
    if (M[V[i]].front() != S[i]){
      stable = false;
      break;
    } else {
      M[V[i]].pop();
    }
  }
  if (stable){
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }
  for (int i = 0; i < n; i++){
    cout << S[i] << ' ' << V[i] << endl;
  }
}
