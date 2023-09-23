#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int n,b,f,r,v,i,j,k,room[4][3][10];
int main(void){
  cin>>n;
  for(i=0;i<n;i++){
    cin>>b>>f>>r>>v;
    room[b-1][f-1][r-1]+=v;
  }
  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      for(k=0;k<10;k++){
        cout<<" "<<room[i][j][k];
      }
      cout<<endl;
    }
    if(i!=3)cout<<"####################"<<endl;
  }
  return 0;
}

