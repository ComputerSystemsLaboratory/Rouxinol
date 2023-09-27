#define _GLIBCXX_DEBUG

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

#include <numeric>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <cmath>
#include <complex>

#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep(i,n) REP(i,0,n)
#define FOR(i,c) for(typeof((c).begin())i=(c).begin();i!=(c).end(); ++i)

#define EXIST(e,s)((s).find(e)!=(s).end())
#define RESET(a) memset((a),0,sizeof(a))
#define SET(a) memset((a),-1,sizeof(a))

#define ll long long

using namespace std;

int w, h;
int num;
int field[50][50];

int d[8][2] = {{-1,-1},{0,-1},{1,-1},{-1,0},{1,0},{-1,1},{0,1},{1,1}};

void search(int x, int y){
  if(field[y][x] == 1){
    field[y][x] = 0;
    for(int i=0; i<8; i++){
      if(0<=x+d[i][0] && x+d[i][0]<w && 0<=y+d[i][1] && y+d[i][1]<h){
	search(x+d[i][0], y+d[i][1]);
      }
    }
  }
}

int main(void){
  while(cin >> w >> h, w || h){
    num = 0;
    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
	cin >> field[i][j];
      }
    }

    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
	if(field[i][j] == 1){
	  num++;
	  search(j, i);
	}
      }
    }
    cout << num << endl;
  }
  
  return 0;
}