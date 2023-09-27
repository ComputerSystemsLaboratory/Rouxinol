#include <iostream>
using namespace std;

int main() {
  int n,q;

  cin >> n;
  int S[n+1];
  for(int k=0;k<n;k++){
    cin >> S[k];
  }
  cin >> q;
  int T[q];
  for(int l=0;l<q;l++){
    cin >> T[l];
  }

  int count=0;
  for(int j=0;j<q;j++){
    int i=0;
    S[n] = T[j];
    while(S[i] != T[j]){
      i++;
    }
    if(i != n) count += 1;
  }

  cout << count << endl;
    
  return 0;
}