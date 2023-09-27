#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m, p;
  while(cin >> n >> m >> p, n || m || p){
    m--;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
      cin >> v[i];
      sum += v[i]; 
    }
    sum *= 100 - p;
    
    if(v[m] == 0)cout << 0 << endl;
    else cout << sum / v[m] << endl;
  }
}