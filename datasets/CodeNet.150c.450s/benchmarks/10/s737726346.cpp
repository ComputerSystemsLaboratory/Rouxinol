#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,c,d;
  int house[5][4][11]={0};
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c>>d;
    house[a][b][c]+=d;
  }
  for(int h=1;h<=4;h++){
    for(int i=1;i<=3;i++){
      for(int j=1;j<=10;j++){
	cout<<" "<<house[h][i][j];
      }
      cout<<endl;
    }
    if(h!=4){
      cout<<"####################"<<endl;
    }
  }
  return 0;
}