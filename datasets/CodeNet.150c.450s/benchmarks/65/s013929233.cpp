#include<stdio.h>
#include<string.h>
int main(){

  int n,i,j,min,flag=1,sum=0;
  char c1[36];
  int  c2[36];
  char babble1[36];
  int  babble2[36];
  char esc1;
  int  esc2;

  scanf("%d",&n);
  for(i=0;i<n;i++) scanf(" %c%d",&c1[i],&c2[i]);

  for(i=0;i<n;i++){
    babble1[i]=c1[i];
    babble2[i]=c2[i];
  }

  if(n==1){
    printf("%c%d\nStable\n",c1[0],c2[0]);
    printf("%c%d\nStable\n",c1[0],c2[0]);
  }

  if(n!=1){
    //start babble

    while(flag){
      flag=0;

      for(j=n-1;j>=1;j--){
        if(babble2[j] < babble2[j-1]){
          esc1=babble1[j-1];
          esc2=babble2[j-1];
          babble1[j-1]=babble1[j];
          babble2[j-1]=babble2[j];
          babble1[j]=esc1;
          babble2[j]=esc2;

          flag=1;
        }
      }
    }
    for(i=0;i<n;i++){
      printf("%c%d",babble1[i],babble2[i]);
      if(i==n-1) break;
      printf(" ");
    }

    printf("\nStable\n");  //end babble

    //start select

    for(i=0;i<n-1;i++){
      min=i;
      for(j=i+1;j<n;j++){
        if(c2[j]<c2[min]){
          min=j;
        }
      }
      if(i==min) continue;
      esc1=c1[i];
      esc2=c2[i];
      c1[i]=c1[min];
      c2[i]=c2[min];
      c1[min]=esc1;
      c2[min]=esc2;
    }
    for(i=0;i<n;i++){
      printf("%c%d",c1[i],c2[i]);
      if( !((c1[i]==babble1[i]) && (c2[i]==babble2[i]))) sum++;
      if(i==n-1) break;
      printf(" ");
    }

    if(sum==0) printf("\nStable\n");
    else       printf("\nNot stable\n");

    //end select
  }
  return 0;
}