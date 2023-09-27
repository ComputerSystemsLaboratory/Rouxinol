//
//  main.cpp
//  AOJ-1160
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

void dfs(vector<vector<int>> &field, int h, int w){
  int dhw[3] = {1, -1, 0};
  field[h][w] = 0;
  
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      int nh = h+dhw[i];
      int nw = w+dhw[j];
      for(int h=0; h<H; h++){
        for(int w=0; w<W; w++){
          if(0<=nh && nh<H && 0<=nw && nw<W && field[nh][nw]==1){
            dfs(field, nh, nw);
          }
        }
      }
    }
  }
  
}


int main(){
  
  while(cin >> W >> H, W|H){
    vector<vector<int>> field(H);
    for(int h=0; h<H; h++){
      field[h].resize(W);
    }
    
    for(int h=0; h<H; h++){
      for(int w=0; w<W; w++){
        cin >> field[h][w];
      }
    }
    
    int n=0;
    for(int h=0; h<H; h++){
      for(int w=0; w<W; w++){
        if(field[h][w] == 1){
          dfs(field, h, w);
          n++;
        }
      }
    }
    cout << n << endl;
    
  }
  

  return 0;
}