#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int h,p,ans,sum;
    ans=0;
    scanf ("%d",&h);
    while(h){
      ans=0;
      vector<vector<int> > a(h+45,vector<int>(5,0));
      for(int s=h-1;s>=0;s--){
        for(int t=0;t<5;t++){
          scanf ("%d",&a[s][t]);
          ans=ans+a[s][t];
        }
      }
      p=100;
      while(p){
        for(int s=0;s<h;s++){
          if(a[s][0]==a[s][1]){
            if(a[s][1]==a[s][2]){
              if(a[s][2]==a[s][3]){
                if(a[s][3]==a[s][4]){
                  for(int t=0;t<5;t++){
                    a[s][t]=0;
                  }
                }
                else{
                  for(int t=0;t<4;t++){
                    a[s][t]=0;
                  }
                }
              }
              else{
                for(int t=0;t<3;t++){
                  a[s][t]=0;
                }
              }
            }
            else{
              if(a[s][2]==a[s][3]){
                if(a[s][3]==a[s][4]){
                  for(int t=2;t<5;t++){
                    a[s][t]=0;
                  }
                }
              }
            }
          }
          else{
            if(a[s][1]==a[s][2]){
              if(a[s][2]==a[s][3]){
                if(a[s][3]==a[s][4]){
                  for(int t=1;t<5;t++){
                    a[s][t]=0;
                  }
                }
                else{
                  for(int t=1;t<4;t++){
                    a[s][t]=0;
                  }
                }
              }
            }
            else{
              if(a[s][2]==a[s][3]){
                if(a[s][3]==a[s][4]){
                  for(int t=2;t<5;t++){
                    a[s][t]=0;
                  }
                }
              }
            }
          }
        }
        for(int t=0;t<5;t++){
          for(int k=0;k<h;k++){
            for(int s=0;s<h;s++){
              if(a[s][t]==0){
                for(int r=s;r<h;r++){
                    a[r][t]=a[r+1][t];
                }
              }
            }
          }
        }
        p--;
      }
      sum=0;
      for(int s=h-1;s>=0;s--){
        for(int t=0;t<5;t++){
          sum=sum+a[s][t];
        }
        //printf("%d %d %d %d %d\n",a[s][0],a[s][1],a[s][2],a[s][3],a[s][4]);
      }
      ans=ans-sum;
      printf("%d\n",ans);
      scanf ("%d",&h);
    }
}

