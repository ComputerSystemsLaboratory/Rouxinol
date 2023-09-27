#include <iostream>
using namespace std;
int main(){

  int ban[10][5],add,result,did,h,i,j;

  while(cin>>h,h){
  result=0;
  for(i=0;i<h;i++) for(j=0;j<5;j++) cin>>ban[i][j];
  while(1){
  did=0;
  for(i=0;i<h;i++) for(j=0;j<3;j++){
      add=0;
      if(ban[i][j]!=0&&ban[i][j]==ban[i][j+1]&&ban[i][j]==ban[i][j+2]){
        if(j+3<5) if(ban[i][j]==ban[i][j+3]){
            add++;
            ban[i][j+3]=0;
            if(j+4<5) if(ban[i][j]==ban[i][j+4]){
                add++;
                ban[i][j+4]=0;
              }
          }
        add+=3;
        result+=ban[i][j]*add;
        ban[i][j]=ban[i][j+1]=ban[i][j+2]=0;
        did++;
      }
    }

  if(did!=0){
    for(int k=0;k<10;k++) for(i=h-1;i!=0;i--) for(j=0;j<5;j++) if(ban[i][j]==0){
          ban[i][j]=ban[i-1][j];
          ban[i-1][j]=0;
        }
  } else break;

  }

  cout<<result<<endl;

  }
  return 0;
 
}