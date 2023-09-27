#include<iostream>

using namespace std;

int main(){
  int n, q, count = 0;
  cin >> n;
  long int S[n];
  for(int i = 0; i < n; i++)
    cin >> S[i];
  cin >> q;
  while(q--){
    long int T;
    cin >> T;
    int i = n;
    while(i--){
      if(S[i] == T){
        count++;
        break;
      }
    }
  }
  cout << count << endl;
}