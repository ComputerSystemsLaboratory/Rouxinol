#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
  while(1){
    int n, r;
    cin >> n >> r;
    if(n == 0 && r == 0)
      break;
    
    int card[n+1];
    for(int i = 1; i <= n; i++) card[i] = n - i + 1;
    // for(int i = 1; i <= n; i++) printf("%d ", card[i]);
    // puts("A");
    
    int shuf[n+1];
    shuf[0] = 0;
    for(int i = 1; i <= r; i++){
      int p, c;
      cin >> p >> c;
      
      for(int j = 0; j < c; j++){ // p~
	shuf[j+1] = card[p+j];
	//	printf("%d ", shuf[j+1]);
      }
      // printf("|");
      for(int j = 1; j < p; j++){ // 1~
	shuf[c+j] = card[j];
	//printf("%d ", shuf[c+j]);
      }
      // printf("|");
      for(int j = c + p; j <= n; j++){ //others
	shuf[j] = card[j];
	//printf("%d ", shuf[j]);
      }
      //puts("");
      for(int j = 1; j <= n; j++){ // copy
	card[j] = shuf[j];
      }
      for(int j = 1; j <= n; j++){
	//	printf("%d ", card[j]);
      }
      //puts("");
      
    }

    printf("%d\n", card[1]);
  }
  
  return 0;
}