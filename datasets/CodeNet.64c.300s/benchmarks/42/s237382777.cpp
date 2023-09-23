#include<stdio.h>
int main(){
  int N,M,ba[21][21],x,y,l,i,j,x2,y2,c;
  char d,k;



  while(1){

    //syokika
    x2=10;
    y2=10;
    c=0;
    for(i=0;i<21;i++){
      for(j=0;j<21;j++){
	ba[i][j]=0;
      }
    }

    //input isi
    scanf("%d",&N);
    c=N;
    if(N==0)break;
    for(i=0;i<N;i++){
      scanf("%d%d",&x,&y);
      ba[x][y]=1;
    }

    //input robot
    scanf("%d",&M);
    for(i=0;i<M;i++){
      scanf("%c%c %d",&k,&d,&l);

      if(d=='N'){
	while(l!=0){
	  y2=y2+1;
	  ba[x2][y2]*=2;
	  if(ba[x2][y2] == 2) c=c-1;
	  --l;

	}
      }
     else if(d=='E'){
	while(l!=0){
	  x2=x2+1;
	  ba[x2][y2]=ba[x2][y2]*2;
	  if(ba[x2][y2] == 2) c=c-1;
	  --l;

	}
      }
     else if(d=='W'){
	while(l!=0){
	  x2=x2-1;
	  ba[x2][y2]=ba[x2][y2]*2;
	  if(ba[x2][y2] == 2) c=c-1;
	  --l;

	}
      }
     else if(d=='S'){
	while(l!=0){
	  y2=y2-1;
	  ba[x2][y2]=ba[x2][y2]*2;
	  if(ba[x2][y2] == 2) c=c-1;
	  --l;

	}
      }
    }
    if(c==0) printf("Yes\n");
    else printf("No\n");
  }
 return 0;
}