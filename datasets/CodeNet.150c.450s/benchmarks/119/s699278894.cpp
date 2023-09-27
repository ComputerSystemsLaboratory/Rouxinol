#include<iostream>

using namespace std;

const int maxWH = 52;
int H, W;
int C[maxWH][maxWH] = {0};

void dfs(int hh, int ww) {
  int dh[] = {-1, 0, 1, 0, -1, -1, 1, 1};
  int dw[] = {0, -1, 0, 1, -1, 1, -1, 1};
  //cout<<hh<<" "<<ww<<endl;
  if(0<=hh && 0<=ww && hh<H && ww<W) {
    if(C[hh][ww] == 1) {
      C[hh][ww] = 0; // false
      /*
      cout<<"now "<<hh<<" "<<ww<<endl;
      for(int i=0; i<8; i++) {
        cout<<hh+dh[i]<<" "<<ww+dw[i]<<endl;
      }
      */
      for(int i=0; i<8; i++) {
        dfs(hh+dh[i], ww+dw[i]);
      }
    }
  }
}

int main() {
  while(cin>>W>>H && !(W==0 && H==0)) {
    for(int i=0; i<H; i++) {
      for(int j=0; j<W; j++) {
	cin>>C[i][j];
      }
    }

    /*
    cout<<endl;
    for(int i=0; i<H; i++) {
      for(int j=0; j<W; j++) {
	cout<<C[i][j]<<" ";
      }
      cout<<endl;
    }
    */
    
    int ans = 0;
    for(int i=0; i<H; i++) {
      for(int j=0; j<W; j++) {
	if(C[i][j] == 1) {
	  ans++;
	  dfs(i,j);
	}
      }
    }
    cout<<ans<<endl;
  }
}