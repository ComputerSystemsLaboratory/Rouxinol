#include<bits/stdc++.h>
using namespace std;
#define INF (1<<30)
long long data[50001];

int main(){
  int n,m; //nがしたい金額、　mがコインの種類
  cin >> n >> m;
  for(int i=0;i<=n;i++){
    data[i] = INF;
  }
  data[0] = 0;
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a;
    data[a] = 1;
  }
  for(int i=2;i<=n;i++){
    for(int j=i-1;j>0;j--){
      data[i] = min( (data[j]+data[i-j]), data[i]);
    }
  }
  cout << data[n] << endl;
  return 0;
}