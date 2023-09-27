#include <stdio.h>
#include <float.h> 
int main(void){	
  int n[100];	
  int a[1000];	
  int i,j,max[100],min[100],suma[100],sumb[100],ave[100]; 
  for(i = 0;;i++){  
    scanf("%d",&n[i]);
    if(n[i]==0)break;  
    for(j=0 ; j<n[i] ;j++){ 
      scanf("%d",&a[j]);
    } 
    max[i] = a[0];
    min[i] = a[0];
    suma[i] = 0; 
    for(j=0 ; j<n[i] ; j++){
      if(a[j] >= max[i]){
	max[i] = a[j];
      }
      if(a[j] <= min[i]){
	min[i] = a[j];
      }
      suma[i] += a[j];
    }
  } 

  for(j = 0;j < i;j++){
    sumb[j] = suma[j]-max[j]-min[j]; 
    n[j] -= 2;
    ave[j] = sumb[j] / n[j] ;
    printf("%d\n",ave[j]);    
  }
  return 0;
  
}