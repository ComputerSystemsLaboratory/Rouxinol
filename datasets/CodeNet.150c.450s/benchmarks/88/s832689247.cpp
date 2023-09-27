#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

typedef pair<int, pair<int, int>> P;

int main(){
  vector<P> REC;
  for(int i = 1; i <= 150; i++){
    for(int j = i + 1; j <= 150; j++){
      REC.push_back(pair<int,pair<int, int>>(i*i+j*j,pair<int, int>(i,j)));
    }
  }

  sort(REC.begin(), REC.end());
 
  int h, w;
  while(cin >> h >> w, h || w){
    int tmp = h * h + w * w;
    for(int i = 0; i < 150*150; i++){
      if(REC[i].first == tmp && REC[i].second.first > h){
        cout << REC[i].second.first << " " << REC[i].second.second << endl;
        break;
      }else if(REC[i].first > tmp){
        cout << REC[i].second.first << " " << REC[i].second.second << endl;
        break;
      }
    }
  }
}