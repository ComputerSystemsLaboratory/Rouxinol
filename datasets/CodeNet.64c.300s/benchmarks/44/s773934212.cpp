#include<iostream>
using namespace std;
int FULL=100000;
int main(){
  while(1){
    int n;
    cin>>n;
    if(!n)
      break;
    int times[10][10];
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        times[i][j]=FULL;
      }
      times[i][i]=0;
    }
    int a,b,c;
    for(int i=0;i<n;i++){
      cin>>a>>b>>c;
      times[a][b]=c;
      times[b][a]=c;
    }
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        for(int k=0;k<10;k++){
          if(times[j][k]>(times[j][i]+times[i][k])){
            times[j][k]=times[j][i]+times[i][k];
            times[k][j]=times[j][i]+times[i][k];
          }
        }
      }
    }
    int min=1000000;
    int town=100;
    int num=0;
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        if(times[i][j]==FULL)
          break;
        num+=times[i][j];
      }
      if(num==0)
        break;
      if(num<min){
        min=num;
        town=i;
      }
      num=0;
    }
    cout<<town<<' '<<min<<endl;
  }
  return 0;
}
