#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> days = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  vector<string> week = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  while(true){
    int m, d; cin >> m >> d;
    if(m == 0 && d == 0) break;

    int ans = d;
    for(int i=0; i<m-1; i++) ans += days[i];
    
    cout << week[(ans + 2) % 7] << endl;
  }
}
  
  
