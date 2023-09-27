#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,n,art[1000][2];
  while(cin>>n,n!=0){
    art[0][0]=10;art[0][1]=10;
    for(int i=1;i<n;i++){
      cin>>a>>b;
      if(b==0){art[i][0]=art[a][0];art[i][1]=art[a][1]-1;}
      else if(b==1){art[i][0]=art[a][0]-1;art[i][1]=art[a][1];}
      else if(b==2){art[i][0]=art[a][0];art[i][1]=art[a][1]+1;}
      else if(b==3){art[i][0]=art[a][0]+1;art[i][1]=art[a][1];}
    }
    int ymin=22,ymax=0,xmin=22,xmax=0;
    for(int i=0;i<n;i++){
      if(art[i][0]>ymax)ymax=art[i][0];
      if(art[i][0]<ymin)ymin=art[i][0];
      if(art[i][1]>xmax)xmax=art[i][1];
      if(art[i][1]<xmin)xmin=art[i][1]; 
    }
    cout<<xmax-xmin+1<<" "<<ymax-ymin+1<<endl;
  }
  return 0;
}