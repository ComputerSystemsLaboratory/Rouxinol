#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define SIZE 100010

bool solve(){
  int h;
  int stone[5][12];
  scanf("%d", &h);

  if(!h) return 0;
  
  for(int i=0;i<h;i++){
    for(int j=0;j<5;j++){
      scanf("%d", &stone[j][h-i-1]);
    }
  }
  for(int i=0;i<5;i++)
    stone[i][h] = -1;

  bool flag = true;
  int ans = 0;
  
  while(flag){
    flag = false;

    for(int i=0;i<h;i++){
      int t = stone[2][i];
      if(t == -1) break;
      
      if((stone[1][i] == t && stone[3][i] == t) ||
         (stone[3][i] == t && stone[4][i] == t) ||
         (stone[0][i] == t && stone[1][i] == t)){

        if(stone[0][i] == t && stone[1][i] == t){
          ans += stone[0][i];
          stone[0][i] = -1;
        }

        if(stone[3][i] == t && stone[4][i] == t){
          ans += stone[4][i];
          stone[4][i] = -1;
        }

        if(stone[1][i] == t){
          ans += stone[1][i];
          stone[1][i] = -1;
        }

        if(stone[3][i] == t){
          ans += stone[3][i];
          stone[3][i] = -1;
        }

        ans += t; stone[2][i] = -1;

        flag = true;
      }
    }


    for(int i=0;i<5;i++){
      for(int j=h-1;j>=0;j--){
        if(stone[i][j] == -1){
          for(int k=j;k<h-1;k++) swap(stone[i][k], stone[i][k+1]);
        }
      }
    }
  }

  printf("%d\n", ans);

  return 1;
}

int main(){
  while(solve());

}

