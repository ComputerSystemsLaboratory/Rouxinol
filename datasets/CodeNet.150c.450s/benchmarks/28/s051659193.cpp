#include <stdio.h>
 
#define BAGGAGE 132000
#define TRACK 132000
 
int checkP(int n, int k, int w[], int P) {
  int i, j, W[TRACK]= {0};
 
 
  j = 1;
  for (i = 0; i < n; i++) {
    if ((W[j] + w[i]) <= P) {
      W[j] += w[i];
    
    }
    else {
      i--;
      j++;
      //     
      if (k < j) {
    //  
    return checkP(n, k, w, P + 1);
      }
    }
  }
 
  return P;
}
 
 
int main(void) {
  int i, n, k, w[BAGGAGE] = {0}, P;
  double W = 0;
   
  scanf("%d %d", &n, &k);
  for (i = 0; i < n; i++) {
    scanf("%d", &w[i]);
    W += w[i];
  }

  P = (int)(W / k + 0.9);
  for (i = 0; i < n; i++) {
    if (P < w[i])
      P = w[i];
  }
 
  P = checkP(n, k, w, P);
  printf("%d\n", P);
 
  return 0;
}