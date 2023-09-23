#include <iostream>
using namespace std;
int main() {
  int n,b,f,r,v,college[4][3][10]={0};
  cin>>n;
  for(int m=0;m<n;m++){
  cin>>b>>f>>r>>v;
  college[b-1][f-1][r-1]+=v;
  if(college[b-1][f-1][r-1]>9)college[b-1][f-1][r-1]=9;
  if(college[b-1][f-1][r-1]<0)college[b-1][f-1][r-1]=0;
  }
for(int i=0;i<4;i++){
  if(i!=0){
    for(int l=0;l<20;l++)cout<<"#";
    cout<<endl;
  }
    for (int j = 0; j <3 ; j++) {
      for (int k=0;k<10;k++){
        if(college[i][j][k]!=0)cout<<" "<<college[i][j][k];
        else{cout<<" "<<0;}
      }
      cout<<endl;
    }
}
  return 0;
}