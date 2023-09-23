#include<iostream>
#include<climits>
using namespace std;
int g[12][12];
const int INF = INT_MAX/2;
int main(){
  while(true){
    int n;
    cin >> n;
    if(n == 0)break;
    fill(*g,*(g+12),INF);
    for(int i = 0;i < 12;i++)g[i][i] = 0;

    for(int i = 0;i < n;i++){
      int a,b,c;
      cin >> a >> b >> c;
      g[a][b] = g[b][a] = c;
    }
  
    for(int k = 0;k < 12;k++){
      for(int j = 0;j < 12;j++){
        for(int i = 0;i < 12;i++){
          
          g[i][j] = min( g[i][j], g[i][k] + g[k][j]);
        }
      }
    }  
    
    int ans = INF,node = 0;
    for(int i = 0;i < 12;i++){
      int tmp = 0;
      for(int j = 0;j < 12;j++){
        tmp += g[i][j] == INF ? 0 : g[i][j];
      }
      if(tmp > 0 && tmp < ans){
        node = i;
        ans = tmp;
      }
    
    }
    cout << node << ' ' << ans << endl;
  }
}