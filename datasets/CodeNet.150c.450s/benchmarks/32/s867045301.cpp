#include<bits/stdc++.h>
using namespace std;

int main(){
  int m, nmin, nmax;
  while(cin >> m >> nmin >> nmax, m || nmin || nmax){
    nmin--;
    nmax--;
    vector<int> v(m);
    
    for(int i = 0; i < m; i++){
      cin >> v[i];
    }

    pair<int, int> ans = make_pair(0, 0);

    for(int i = nmin; i <= nmax; i++){
      if(v[i] - v[i + 1] >= ans.second){
        ans = make_pair(i + 1, v[i] - v[i + 1]);
      }  
    } 
    cout << ans.first << endl;
  }
}