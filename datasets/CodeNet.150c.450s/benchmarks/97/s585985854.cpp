#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

typedef pair<int, int> P;

int main(){
  int N;
  while(cin >> N, N){
    int north, west, south, east;
    map<int, P> field;
    field[0] = P(0, 0);
    int n, d;
    for(int i = 1 ; i < N ; i++){
      cin >> n >> d;
      if(d == 0){
	field[i] = P(field[n].first-1, field[n].second);
      }
      else if(d == 1){
	field[i] = P(field[n].first, field[n].second-1);
      }
      else if(d == 2){
	field[i] = P(field[n].first+1, field[n].second);
      }
      else if(d == 3){
	field[i] = P(field[n].first, field[n].second+1);
      }
    }
    
    north = west = south = east = 0;
    
    for(int i = 1 ; i < N ; i++){
      north = max(north, field[i].second);
      south = min(south, field[i].second);
      east = max(east, field[i].first);
      west = min(west, field[i].first);
    }
    
    cout << abs(east - west)+1 << ' ' << abs(north - south)+1 << endl;
  }
  return 0;
}
  