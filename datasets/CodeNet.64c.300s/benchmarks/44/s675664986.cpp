#include <iostream>
#include <algorithm>
#define INF (1 << 25)
using namespace std;

int main(){
  int cost[64][64];
  int n,a,b,c;
  while(cin >> n,n){
    int maxi = 0;
    fill_n(cost[0],64*64,INF);
    while(n--){
      cin >> a >> b >> c;
      cost[a][b] = cost[b][a] = c;
      cost[a][a] = cost[b][b] = 0;
      maxi = max(max(a,b),maxi);
    }
    for(int i=0;i<=maxi;i++){
      for(int j=0;j<=maxi;j++){
	for(int k=0;k<=maxi;k++){
	  cost[j][k] = min(cost[j][k],cost[j][i]+cost[i][k]);
	}
      }
    }
    int m_num,m_sum = INF;
    for(int i=0;i<=maxi;i++){
      int sum = 0;
      for(int j=0;j<=maxi;j++) sum += cost[i][j];
      if(m_sum > sum){
	m_sum = sum;
	m_num = i;
      }
    }
    cout << m_num << " " << m_sum << endl;
  }
}