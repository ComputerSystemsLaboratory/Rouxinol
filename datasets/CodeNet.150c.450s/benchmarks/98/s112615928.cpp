#include <bits/stdc++.h>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(void)
{
  int n, m;
  int A[105];
  int B[105];
  int ans[2];
  while(cin >> n >> m){
    if(n == 0 && m == 0) break;
   
    
    ans[0] = 0;
    ans[1] = 0;
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < m; i++) cin >> B[i];
    
    int sum1 = 0;
    int sum2 = 0;
    
    for(int i = 0; i < n; i++) sum1 += A[i];
    for(int i = 0; i < m; i++) sum2 += B[i];

    int min = 1000000;

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
	if(sum1 - A[i] + B[j] == sum2 - B[j] + A[i] && min > A[i] + B[j]){
	  ans[0] = A[i];
	  ans[1] = B[j];
	  min = A[i] + B[j];
	}
      }
    }
    
    if(ans[0] == 0) cout << -1 << endl;
    else cout << ans[0] << " " << ans[1] << endl;
   
  }
    return 0;
}