//
//  main.cpp
//  AOJ-1130-2
//
//  Created by Kenta Kodera on 2017/06/18.
//  Copyright ?? 2017??´ Kenta Kodera. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>
#include <stack>
#include <tuple>
#include <array>
#include <ctype.h> // isdigit
#include <cassert>
using namespace std;

int W, H;

int dfs(vector<string> &room, int h, int w){
  
  int dh[4] = {1, 0, -1, 0};
  int dw[4] = {0, 1, 0, -1};
  room[h][w] = '#';
  
  int ans = 1;
  for(int i=0; i<4; i++){
    int nh = h + dh[i];
    int nw = w + dw[i];
    if(0<=nh && nh<H && 0<=nw && nw<W && room[nh][nw] == '.'){
      ans += dfs(room, nh, nw);
    }
  }
  return ans;
}

int main(){
  
  while(cin >> W >> H, W|H){
    
    vector<string> room(H);
    for(int i=0; i<H; i++){
      cin >> room[i];
    }
    
    for(int h=0; h<H; h++){
      for(int w=0; w<W; w++){
        if(room[h][w] == '@'){
          cout << dfs(room, h, w) << endl;
        }
      }
    }
  }
  return 0;
}