#include<iostream>

using namespace std;

const int maxSize = 21;
int mapData[maxSize][maxSize] = {0};
int W, H, Ans;

void dfs(int hh, int ww) {
  if(mapData[hh][ww] == 1) {
    mapData[hh][ww] = 0;
    Ans++;
    if(hh+1<H && mapData[hh+1][ww]==1) {
      dfs(hh+1, ww);
    }
    if(ww+1<W && mapData[hh][ww+1]==1) {
      dfs(hh, ww+1);
    }
    if(0<=hh-1 && mapData[hh-1][ww]==1) {
      dfs(hh-1, ww);
    }
    if(0<=ww-1 && mapData[hh][ww-1]==1) {
      dfs(hh, ww-1);
    }
  }
}

int main() {
  while(cin>>W>>H && !(W==0 && H==0)) {
    int startW, startH;
    Ans = 0;
    for(int i=0; i<H; i++) {
      string str;
      cin>>str;
      for(int j=0; j<W; j++) {
	if(str[j] == '.') {
	  mapData[i][j] = 1; // true
	}
	else if(str[j] == '#') {
	  mapData[i][j] = -1; // false;
	}
	else {
	  mapData[i][j] = 1; //true
	  startW = i;
	  startH = j;
	}
      }
    }
    /*
    for(int i=0; i<H; i++) {
      for(int j=0; j<W; j++) {
	cout<<mapData[i][j]<<" ";
      }
      cout<<endl;
    }
    */
    dfs(startW, startH);
    /*
    for(int i=0; i<H; i++) {
      for(int j=0; j<W; j++) {
	cout<<mapData[i][j]<<" ";
      }
      cout<<endl;
    }
    */
    cout<<Ans<<endl;
  }
}