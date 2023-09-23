#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int a, b, n, y, x;

  while(cin >> a >> b >> n){

    if(!a && !b) break;

    int field[b][a];
    int mfield[b + 2][a + 2];
    bool check[b][a];
    
    // Empty
    for(int i = 0; i < b + 2; ++i){
      for(int j = 0; j < a + 2; ++j){
	if(i >= 0 && i < b && j >= 0 && j < a){
	  field[i][j] = 0;
	  check[i][j] = false;
	}
	mfield[i][j] = 0;
      }
    }

    // Start
    field[0][0] = 1;
    mfield[1][1] = 1;
    
    // Construction
    for(int i = 0; i < n; ++i){
      cin >> x >> y;
      field[y - 1][x - 1] = 2;
      mfield[y + 1][x + 1] = 0;
    }
    
    // Goal
    field[b - 1][a - 1] = 3;
    
    mfield[0][1] = 1;
    for(int i = 1; i <= b; ++i){
      for(int j = 1; j <= a; ++j){
	if(!check[i - 1][j - 1] && field[i - 1][j - 1] != 2){
	  mfield[i][j] = mfield[i - 1][j] + mfield[i][j - 1];
	  check[i - 1][j - 1] = true;
	}
	/*
	for(int k = 0; k < b + 2; ++k){
	  for(int l = 0; l < a + 2; ++l){
	    cout << mfield[k][l];
	  }
	  cout << endl;
	}
	cout << endl;
	*/
      }
    }

    cout << mfield[b][a] << endl;
    
  }
  
}