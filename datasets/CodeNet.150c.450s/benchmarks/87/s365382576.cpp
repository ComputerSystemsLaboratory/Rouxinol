#include <iostream>
#include <vector>
using namespace std;
int main(){
  int H, h, b, e;
  while (cin >> H, H){
    int C[H][5], ans = 0;
    for (int i = 0; i < H; ++i){
      for (int j = 0; j < 5; ++j){
	cin >> C[H-1-i][j];
      }
    }
    bool f = true;
    vector< vector<int> > V;
    while (f){
      f = false;
      for (int i = 0; i < H; ++i){
	b = 0;
	e = 0;
	for (int j = 1; j < 5; ++j){
	  if (C[i][j] && C[i][j-1] == C[i][j]){
	    e = j;
	  }else{
	    if (e - b > 1){
	      f = true;
	      V.push_back({i,b,e});
	    }
	    b = j;
	    e = j;
	  }
	}
	if (e - b > 1){
	  f = true;
	  V.push_back({i,b,e});
	}
      }
      while (!V.empty()){
	h = V.back()[0];
	b = V.back()[1];
	e = V.back()[2];
	V.pop_back();
	ans += C[h][b]*(e-b+1);
	for (int i = h; i < H; ++i){
	  for (int j = b; j <= e; ++j){
	    if (i+1 < H){
	      C[i][j] = C[i+1][j];
	    }else{
	      C[i][j] = 0;
	    }
	  }
	}
      }
    }
    cout << ans << endl;
  }
  return 0;
}