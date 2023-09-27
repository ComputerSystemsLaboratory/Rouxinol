#include<iostream>
using namespace std;

int house[4][3][10]={{{0}}};

void print(int n){
  for(int i=0;i<3;i++){
    for(int j=0;j<10;j++){
      cout<<" "<<house[n][i][j];
    }
    cout<<endl;
  }
}

int main(){
  int n;
  cin>>n;
  while(n--){
    int b,f,r,v;
    cin>>b>>f>>r>>v;
    house[b-1][f-1][r-1]+=v;
  }
  for(int i=0;i<3;i++){
    print(i);
    cout<<"####################"<<endl;
  }
  print(3);
  return 0;
}