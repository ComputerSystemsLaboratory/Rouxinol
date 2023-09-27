#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n+1);
  for(int i = 1; i <= n; i++){
     cin >> a.at(i);
  }

  for(int i = 1; i <= n; i++){
    cout << "node " << i << ": key = " << a.at(i) << ", ";
    if(i != 1){
      cout << "parent key = " << a.at(i/2) << ", ";
    }
    if(2*i <= n){
      cout << "left key = " << a.at(2*i) << ", ";
    }
    if(2*i+1 <= n){
      cout << "right key = " << a.at(2*i+1) << ", ";
    }
    cout << endl;
  }
  
}
