#include <bits/stdc++.h>
using namespace std;

int main(){

  int t[111][111];

  memset(t,0,sizeof(t));
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    for(int j = 0; j < b; j++){
      int c;
      cin >> c;
      t[a][c] = 1;
    }
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(j != n)
      cout << t[i][j] << " ";
      else 
	cout << t[i][j];

    }
    cout << endl;
  }


}