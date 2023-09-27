#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,i,j,c;
  while(cin>>n,n!=0){
  int a[n][5],sum=0;;
  for(i=0;i<n;i++)for(j=0;j<5;j++)cin>>a[i][j];
    while(1){
      c=0;
      for(i=0;i<n;i++){
        if(a[i][0]!=0&&a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][2]==a[i][3]&&a[i][3]==a[i][4]){
          sum+=a[i][0]*5;c++;
          a[i][0]=0;a[i][1]=0;a[i][2]=0;a[i][3]=0;a[i][4]=0;
        }
         if(a[i][0]!=0&&a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][2]==a[i][3]){
          sum+=a[i][0]*4;c++;
          a[i][0]=0;a[i][1]=0;a[i][2]=0;a[i][3]=0;
        }
         if(a[i][4]!=0&&a[i][3]==a[i][4]&&a[i][1]==a[i][2]&&a[i][2]==a[i][3]){
          sum+=a[i][1]*4;c++;
          a[i][4]=0;a[i][1]=0;a[i][2]=0;a[i][3]=0;
        }
         if(a[i][2]!=0&&a[i][0]==a[i][1]&&a[i][1]==a[i][2]){
          sum+=a[i][0]*3;c++;
          a[i][0]=0;a[i][1]=0;a[i][2]=0;
        }
         if(a[i][2]!=0&&a[i][3]==a[i][1]&&a[i][1]==a[i][2]){
          sum+=a[i][1]*3;c++;
          a[i][3]=0;a[i][1]=0;a[i][2]=0;
        }
         if(a[i][2]!=0&&a[i][3]==a[i][4]&&a[i][3]==a[i][2]){
          sum+=a[i][2]*3;c++;
          a[i][3]=0;a[i][4]=0;a[i][2]=0;
        }
      }
      if(c==0)break;
      for(int h=0;h<n;h++)for(i=n-1;i>0;i--)for(j=0;j<5;j++){
        if(a[i][j]==0){
          a[i][j]=a[i-1][j];
          a[i-1][j]=0;
        }
      }    
    }
    cout<<sum<<endl;
  }
  return 0;
}