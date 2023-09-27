#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int n; cin >> n;
  int scoreT = 0, scoreH = 0;
  for(int i=0; i<n; i++){
    string T; cin >> T;
    string H; cin >> H;
    if(T > H)
      scoreT += 3;
    else if(T == H){
      scoreT++;
      scoreH++;
    }else
      scoreH += 3;
  }

  cout << scoreT << " " << scoreH << endl;
  
  return 0;
}