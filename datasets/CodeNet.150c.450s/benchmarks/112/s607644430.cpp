#include<stdio.h>
char hantei(char);

int n;
char chana[1000],chanb[1000];


int main(){
  int i,j,m;
  char w;

  while(1){
    scanf("%d",&n);
    if(n==0)break;

    for(i=0;i<n;i++){
      scanf(" %c %c",&chana[i],&chanb[i]);
    }


    scanf("%d",&m);
    for(j=0;j<m;j++){
      scanf(" %c",&w);
      printf("%c",hantei(w));
    }
    printf("\n");
    
  }
  return 0;
}

char hantei(char w){
  int i;                        
  for(i=0;i<n;i++){
    if(w==chana[i])return chanb[i];
  }
  return w;
}