#include<stdio.h>
#include<string.h>
int main(){
  int b=0,i,j=0,k=0;
  char w[1000],a[1000],c[12]="END_OF_TEXT";
  scanf("%s",w);
  while(w[j]!='\0'){
    j++;
  }
  while(strcmp(a,c)!=0){
    scanf("%s",a);
    while(a[k]!='\0'){
      k++;
    }
    if(j==k){
      for(i=0;i<j;i++){
    if(w[i]>='a'&&w[i]<='z'){
      if(a[i]>='A'&&a[i]<='Z'){
        a[i]+=32;
      }
      if(a[i]!=w[i]){
        break;
      }
    }
    else if(w[i]>='A'&&w[i]<='Z'){
      if(a[i]>='a'&&a[i]<='z'){
        a[i]-=32;
      }
      if(a[i]!=w[i]){
        break;
      }
    }
    if(i==j-1){
      b++;
    }
      }
    }
    k=0;
  }
  printf("%d\n",b);
  return(0);
}