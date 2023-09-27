#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, m;

  cin >> n;
  vector<int> v;
  int a[2000*20 + 1];
  int total = 0;

  memset(a,0,sizeof(a));

  for(int i = 0; i < n; i++){
    int k; 
    cin >> k; 
    total+=k;
    v.push_back(k);
  }
  for(int i = 0; i < (1<<n); i++){
    int sum = 0; 
    for(int j = 0; j < n; j++){
      if(i & (1<<j)){
	sum+=v[j];
      }
    }
    a[sum] = 1;

  }
  cin >> m;
  
  for(int i = 0; i < m; i++){
    int k;
    cin >> k;
    if(a[k] == 1) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}