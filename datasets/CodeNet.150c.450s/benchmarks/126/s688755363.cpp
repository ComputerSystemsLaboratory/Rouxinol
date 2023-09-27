#include<iostream>
#include<algorithm>
using namespace std;

int a[100][100],memo[100][100];

int solve(int n,int m){

  if(memo[n][m] != 0) return memo[n][m];

  if(n == 1 && m == 1) return 1;
  if(n == 0 || m == 0) return 0;
  if(a[n][m] == -1) return 0;

  return memo[n][m] = solve(n-1,m) + solve(n,m-1);
}

int main(){

  int n,m,w,x,y;

  while(true){
    cin >> n >> m;
    if(!n && !m) break;

    for(int i=0;i<100;i++){
      for(int j=0;j<100;j++){
	a[i][j] = 0;
	memo[i][j] = 0;
      }
    }

    cin >> w;

    for(int i=0;i<w;i++){
      cin >> y >> x;
      a[y][x] = -1;
    }

    cout << solve(n,m) << endl;
  }
}