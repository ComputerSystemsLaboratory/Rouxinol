#include<stdio.h>
#include<string.h>

typedef struct{
  int t[6];
}sDice;


sDice d;

void f(int dire){
  int work;
  if(dire == 0){//S
    work = d.t[5];
    d.t[5] = d.t[1];
    d.t[1] = d.t[0];
    d.t[0] = d.t[4];
    d.t[4] = work;
  }else if(dire == 1){//W
    work = d.t[5];
    d.t[5] = d.t[3];
    d.t[3] = d.t[0];
    d.t[0] = d.t[2];
    d.t[2] = work;
  }else if(dire == 2){//N
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

int main(){
  int in[3];
  int i;
  
  for(i=0; i<6; ++i){
    scanf("%d", &d.t[i]);
  }

  scanf("%d", &in[0]);

  while(in[0]--){
    scanf("%d %d", &in[1], &in[2]);

    if(d.t[2] == in[2]){
      f(3),f(2);
    }else if(d.t[3] == in[2]){
      f(1),f(2);
    }else{
      for(i=0; i<4; ++i){
	if(in[2] == d.t[1]) break;
	f(0);
      }
    }
    
    for(i=0; i<4; ++i){
      if(in[1] == d.t[0]) break;
      f(1);
    }

    printf("%d\n", d.t[2]);
  }

  return 0;
}

