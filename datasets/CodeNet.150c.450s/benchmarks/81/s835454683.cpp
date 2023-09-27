#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<vector<int> > Matrix;

const int INF = 100000000;
Matrix d; // グラフの距離を格納した2次元配列（隣接行列）
          // d[u][v]は辺e=(u,v)のコスト（辺が存在しない場合はINF、ただしd[i][i]=0）

void warshall_floyd(int n) { // nは頂点数
  for (int i = 0; i < n; i++)      // 経由する頂点
    for (int j = 0; j < n; j++)    // 開始頂点
      for (int k = 0; k < n; k++)  // 終端
        d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
}

int main() {
	
	while(1){
	
  int n=0, m;

  d = Matrix(10, vector<int>(10, INF));
  for (int i = 0; i < 10; i++) d[i][i] = 0;
  
  
  	
	cin >> m;
	if(m == 0) break;
  
	  for (int i = 0; i < m; i++) {
	    int from, to, cost;
	    cin >> from >> to >> cost;
		n = max(n,from);
		n = max(n,to);
	    d[from][to] = cost;
		d[to][from] = cost;
	  }
	  
	  n++;
	  
	  warshall_floyd(n);
	  
	
	  
	  int sum[100]  ; 
	  int a ;
	  
	  for (int i = 0; i < n ; i++) {
	  	sum[i] = 0;
	    for (int j = 0; j < n; j++) {
			
			
			sum[i] +=  d[i][j];
			
	    }
	  }
	  
	  int ans = sum[0];
	  int num = 0;
	  
	  for(int i = 0; i<n-1 ; i++){
	  	if(ans > sum[i+1]){
			ans = sum[i+1];
			num = i+1;
	  	}
	  }
	  
	  cout << num << " " << ans << endl;
  
  }
  
    
  
  
  return 0;
}