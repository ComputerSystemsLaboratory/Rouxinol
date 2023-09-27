#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >>k;
  vector<long long int> an(n);
  for(int i=0;i<n;i++){
    cin >> an.at(i);
  }
  for(int i=k;i<n;i++){
    if(an.at(i-k)/an.at(i)<1){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
  return 0;
}