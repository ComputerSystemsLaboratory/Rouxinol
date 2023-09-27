#include<stdio.h>
#include<string.h>

typedef struct{
  int t[6];
}sDice;

int main(){
  char in[100];
  int i, k;
  sDice d;
  
  for(i=0; i<6; ++i){
    scanf("%d", &d.t[i]);
  }

  scanf("%s", in);

  for(i=0; (unsigned int)i<strlen(in); ++i){
    int work;
    if(in[i] == 'S'){
      work = d.t[5];
      d.t[5] = d.t[1];
      d.t[1] = d.t[0];
      d.t[0] = d.t[4];
      d.t[4] = work;
    }else if(in[i] == 'W'){
      work = d.t[5];
      d.t[5] = d.t[3];
      d.t[3] = d.t[0];
      d.t[0] = d.t[2];
      d.t[2] = work;
    }else if(in[i] == 'N'){
      work = d.t[5];
      d.t[5] = d.t[4];
      d.t[4] = d.t[0];
      d.t[0] = d.t[1];
      d.t[1] = work;
    }else{
      work = d.t[5];
      d.t[5] = d.t[2];
      d.t[2] = d.t[0];
      d.t[0] = d.t[3];
      d.t[3] = work;
    }

  }

  printf("%d\n", d.t[0]);
  
  return 0;
}

