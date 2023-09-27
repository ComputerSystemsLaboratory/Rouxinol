#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin>>n;
  vector<int> res(4,0);
  
  for(int i=0; i<n; i++){
    string si; cin>>si;
    res[0] += (si=="AC");
    res[1] += (si=="WA");
    res[2] += (si=="TLE");
    res[3] += (si=="RE");
  }
  
  cout<<"AC x "<<res[0]<<endl;
  cout<<"WA x "<<res[1]<<endl;
  cout<<"TLE x "<<res[2]<<endl;
  cout<<"RE x "<<res[3]<<endl;
}
