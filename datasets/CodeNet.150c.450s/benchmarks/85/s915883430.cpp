#include <stdio.h>
  
#define INF 10000000
  
int main(){
  int n,i,j,k,l,t,m[101],c,o;
  int mm[101][101];
   
   
  scanf("%d",&n);
  for(i = 1 ; i < n+1; i++){
    scanf("%d%d",&m[i-1],&m[i]);
  }
   
for( i = 1 ; i <= n ; i++ ){
    mm[i][i] = 0;
  }  
   
  for(l = 2 ; l <n+1 ; l++){
    for(i=1;i<n-l+2;i++) {
        o=i+l-1;
    mm[i][o] = INF;
   
    for(k = i ; k < o ; k++){
t=mm[i][k] + mm[k+1][o] + m[i-1] * m[k] *m[o];
 
        if(t < mm[i][o])
          mm[i][o] = t;
        }
      }
    }
  printf("%d\n",mm[1][n]);
  return 0;
  }

