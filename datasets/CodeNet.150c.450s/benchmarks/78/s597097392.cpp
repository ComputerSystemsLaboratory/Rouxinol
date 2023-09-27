#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <time.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define FOR(i, a) for(i = 0; i < (a); i++)
#define FORM(i, a) for(i = (a) i >= 0; i--)
#define INF 100000
using namespace std;
int c[1000], odd[1000];
int mini[1000001];
int miniodd[1000001];
int main(){
int i, j, W, minimumc, minimumodd, l;
 

   for(i = 1; i <= 200; i++){
	   c[i] = (i*(i+1)*(i+2))/6;
   }
   j = 1;
   for(i = 1; i <= 200; i++){
	   if(c[i] % 2 == 1){
		   odd[j] = c[i];
		   j += 1;
	   }
   }

  FOR(i, 1000000){
	  mini[i] = 10000000;
	  miniodd[i] = 10000000;
  }
  mini[0] = 0;
  miniodd[0] = 0;
   for(j = 1; j <= 180; j++){
	 for(i = c[j]; i <= 1000000; i++){
	   mini[i] = min(mini[i], mini[i - c[j]] + 1);
	 }
   }
      for(j = 1; j <= 50; j++){
	 for(i = odd[j]; i <= 1000000; i++){
	   miniodd[i] = min(miniodd[i], miniodd[i - odd[j]] + 1);
	 }
   }
   
	  cin >> W;

	  while(W != 0){
		  cout << mini[W] << " " << miniodd[W] << endl;

		  cin >> W;
	  }

   

return 0;
}