#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  while(cin >> N,N){
    int a,b;
    int ap = 0,bp = 0;
    for(int i = 0;i < N;i++){
      cin >> a >> b;
      if(a < b)bp += a + b;
      else if(a == b){ap += a;bp += b;}
      else ap += a + b;
    }
    cout << ap << " " << bp << endl;
  }
  return 0;
}