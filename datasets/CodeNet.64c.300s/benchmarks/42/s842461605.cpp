#include<stdio.h>
int main(void)
{
  for(;;){
    int houkosu={0};
    int comkosu={0};
    int hou[21][21]={{0},{0}};
    int zahyo[21][21]={{0},{0}};
    int mypox={10};
    int mypoy={10};
    int x={0},y={0};
    int i={0},j={0};
    char dire={0};
    int dis={0};
    int hantei={0};
    char dir[31]={0};
    int di[31]={0};
     
    scanf("%d",&houkosu);
    if(houkosu==0)
      break;
       
    for(i=0;i<houkosu;i++){
      scanf("%d %d",&x,&y);
      hou[x][y]=1;
    }
 
    scanf("%d",&comkosu);
     
    hou[10][10]=0;
    for(i=0;i<2*comkosu;i++){
      scanf("%c",&dire);
      dir[i/2]=dire;
      scanf("%d",&dis);
      di[(i-1)/2]=dis;
    }
     
    for(i=0;i<comkosu;i++){
 
      if(dir[i]=='N'){
        for(j=mypoy+1;j<=mypoy+di[i];j++){
          if(hou[mypox][j]==1)
            hou[mypox][j]=0;
        }
        mypoy+=di[i];
      }else if(dir[i]=='S'){
        for(j=mypoy-1;j>=mypoy-di[i];j--){
          if(hou[mypox][j]==1)
            hou[mypox][j]=0;
        }
        mypoy-=di[i];
      }else if(dir[i]=='E'){
        for(j=mypox+1;j<=mypox+di[i];j++){
          if(hou[j][mypoy]==1)
            hou[j][mypoy]=0;
        }
        mypox+=di[i];
      }else{
        for(j=mypox-1;j>=mypox-di[i];j--){
          if(hou[j][mypoy]==1)
            hou[j][mypoy]=0;
        }
        mypox-=di[i];
      }
    }
     
    for(i=0;i<21;i++){
      for(j=0;j<21;j++){
        if(hou[i][j]!=0)
          hantei=1;
      }
    }
     
    if(hantei==0)
      puts("Yes");
    else
      puts("No");
     
  }
  return 0;
}