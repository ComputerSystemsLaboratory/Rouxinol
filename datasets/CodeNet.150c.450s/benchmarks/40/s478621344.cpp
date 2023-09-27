#include<stdio.h>

void spin_w(int x[]){
  int sai1[6],i;

  for(i=0;i<6;i++){
    sai1[i]=x[i];
  } 

  sai1[0]=x[2];
  sai1[2]=x[5];
  sai1[3]=x[0];
  sai1[5]=x[3];

  for(i=0;i<6;i++){
    x[i]=sai1[i];
  }

}

void spin_s(int x[]){
int sai1[6],i;

  for(i=0;i<6;i++){
    sai1[i]=x[i];
  } 
  sai1[0]=x[4];
  sai1[1]=x[0];
  sai1[4]=x[5];
  sai1[5]=x[1];

  for(i=0;i<6;i++){
    x[i]=sai1[i];
  }

}


int main(){
 
  int i,a=0,j,sai1[6];
  char dic[101];
  for(i=0;i<6;i++){
    scanf("%d",&sai1[i]);
  }
  scanf("%s",dic);
  
  for(i=0;i<=100;i++){
    if(dic[i]=='\0')break;
    
    if(dic[i]=='W'){
      spin_w(sai1);
    }else if(dic[i]=='E'){
      for(j=0;j<3;j++){
	spin_w(sai1);
      }
    }else if(dic[i]=='S'){
      spin_s(sai1);

    }else if(dic[i]=='N'){
      for(j=0;j<3;j++){
	spin_s(sai1);
      }
    }
  }
  printf("%d\n",sai1[0]);
  return 0;
}