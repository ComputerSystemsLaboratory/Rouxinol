#include <iostream>
using namespace std;

int main(){
  int n,q,si,ti,c=0;
  int S[100005],T[50005];
  
  cin >> n;
  for (si=0;si<n;si++)cin >> S[si];

  cin >> q;
  for (ti=0;ti<q;ti++)cin >> T[ti];

  for (ti=0;ti<q;ti++){
    S[n]=T[ti];
    si=0;
    while (S[si]!=T[ti])si++;
    if (si<n)c++;
  }

  cout << c << endl;
  
  return 0;
}