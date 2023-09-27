#include<bits/stdc++.h>
#define INF (1 << 29);
using namespace std;

int main(){
  int n,m;
  int c[20];
  int t[50000+1];
 
  cin >> n >> m;
  for(int i=0;i < m;i++){
    cin >> c[i];
  }

  for(int j=1;j <= n;j++){
      t[j] = INF;
  }
  t[0] = 0;
  
  for(int i=0;i < m;i++){
    for(int j=c[i];j <= n;j++){
      t[j] = min(t[j],t[j - c[i]] + 1);
    }
  }
  cout << t[n] << endl;
  return 0;
}
  
