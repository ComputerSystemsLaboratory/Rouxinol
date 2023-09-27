#include <iostream>
using namespace std;

int main() {
  int H;
  int stone[10][5];
  int i, j, k;
  int score;

  while(1) {
    score = 0;
    cin >> H;

    if(H == 0) break;
  
    for(i = 0; i < H; i++) {
      for(j = 0; j < 5; j++) {
	cin >> stone[i][j]; 
      }
    }
    
    while(1) {
      //石を消去
      int score_temp = 0;
      
      for(i = 0; i < H; i++) {
	for(j = 0; j < 3; j++) {
	  for(k = 1; k + j < 5; k++) {
	    if(stone[i][j] != stone[i][j+k]) {
	      break;
	    }
	  }
	  if(k < 3) {
	    continue;
	  }
	  for(int l = 0; l < k; l++) {
	    score_temp += stone[i][j+l];
	    stone[i][j+l] = 0;
	  }
	}
      }
      
      
      if(score_temp == 0) break;
      score += score_temp;
      
      //石を落下
      
      for(j = 0; j < 5; j++) {
	for(i = 0; i < H; i++) {
	  for(k = H-1; k > i; k--) {
	    if(stone[k][j] == 0) {
	      stone[k][j] = stone[k-1][j];
	      stone[k-1][j] = 0;
	    }
	  }
	}
      }
    }
    cout << score << endl;
  }  
  return 0;
}

