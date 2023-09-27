#include<cstdio>


int ans[1024];
int w,h,k;
bool b[22][22];//??°???

int d(int,int);

int main(void){
  int i,j;
  char c[20][20];
  int p,q;//???????????§?¨?

    k =0;
  while(true){
    //??\???
    scanf("%d%d",&w,&h);
    if(w==0 && h==0)break;
    
    for(i=0;i<h;i++){
	scanf("%s",c[i]);
//printf("%d,%s\n",i,c[i]);
      }
//printf("%c\n",c[0][1]);
    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
        if(c[i][j] =='@'){
            p=i;
            q=j;
        }
          if(c[i][j] =='#'){
              b[i][j] = false;
            
          }else {
              b[i][j] = true;
          }
      }
    }
      ans[k] = 1;
      //printf("Ok");
    d(p,q);
      k++;
  }
    for (i=0;i<k;i++){
        printf("%d\n",ans[i]);
    }
  return 0;
}
int d(int p,int q){
  int i,j,p1,q1;
    b[p][q]  = false;
  for(i=0;i<4;i++){
    if(i==0){
      p1=p+1;
      q1=q;
    } else if(i==1){
      p1=p-1;
      q1=q;
    }else if(i==2){
      p1=p;
      q1=q+1;
    }else {
      p1=p;
      q1=q-1;
    }
    if(p1>=0 && p1<h && q1>=0 && q1<w){
      if(b[p1][q1] == true){
	ans[k]++;
          
        d(p1,q1);
      }
    }
  }
  return 0;
}
     
	