#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>

int main(){
  std::string s1, s2;
  std::cin >> s1;
  std::cin >> s2;
  int map[s1.length()+5][s2.length()+5];
  for (int j=0; j<=s2.length(); j++){
    map[0][j]=j;
  }

  // 斜め
  int counter = 0;
  while(counter<=s1.length()+s2.length()){
    for (int k=0; k<=counter; k++){
      int i=k;
      int j=counter-k;
      if (i>s1.length() || j>s2.length()){
        continue;
      }
      if (i==0 && j==0){
        map[i][j] = 0;
      } else if (i==0){
        map[i][j] = j;
      } else if (j==0){
        map[i][j] = i;
      } else {
        int add = (s1[i-1]==s2[j-1])?0:1;
        map[i][j] = std::min(map[i-1][j-1]+add, std::min(map[i-1][j]+1, map[i][j-1]+1));
      }
    }
    counter++;
  }

  /*for (int i=0; i<=s1.length(); i++){
    for (int j=0; j<=s2.length(); j++){
      printf("map[%d][%d]=%d\n",i,j,map[i][j]);
    }
    }*/
    

  std::cout << map[s1.length()][s2.length()] << std::endl;
  return 0;
}

