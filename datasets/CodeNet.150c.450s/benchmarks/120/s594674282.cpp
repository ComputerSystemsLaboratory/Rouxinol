#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

bool field[11][10010];
int r, c;

int calc(int bit){
  for(int i = 0 ; i < r ; i++){
    if((bit >> i) & 1){
      for(int j = 0 ; j < c ; j++){
	field[i][j] = !field[i][j];
      }
    }
  }
  
  int ret = 0;
  for(int i = 0 ; i < c ; i++){
    int a = 0, b = 0;
    for(int j = 0 ; j < r ; j++){
      a += field[j][i];
      b += !field[j][i];
    }
    ret += max(a, b);
  }
  
  for(int i = 0 ; i < r ; i++){
    if(bit >> i & 1){
      for(int j = 0 ; j < c ; j++){
	field[i][j] = !field[i][j];
      }
    }
  }
  
  return ret;
} 

int main(){
  while(cin >> r >> c){
    if(r == 0 && c == 0) break;
    
    for(int i = 0 ; i < r ; i++){
      for(int j = 0 ; j < c ; j++){
	cin >> field[i][j];
      }
    }
    
    int ans = 0;
    for(int i = 0 ; i < (1<<r) ; i++){ //bit know reverse position
      ans = max(ans, calc(i));
    }
    
    cout << ans << endl;
  }
  return 0;
}