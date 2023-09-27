#include<iostream>
using namespace std;
int koji[17][17]={0};
int way_x=0,way_y=0;
int a,b,n;
int func(int way_x,int way_y);
int main(){
  int x,y;
  while(1){
    for(int i=0;i<17;i++){
      for(int j=0;j<17;j++){
	koji[i][j]=0;
      }
    }
    way_x=0;
    way_y=0;
    cin >> a >> b;
    koji[a-1][b-1]=2;
    if(a==0 && b==0){
      break;
    }
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> x >> y;
      koji[x-1][y-1]=1;
    }
    cout << func(0,0) << endl;
  }
}
int func(int way_x,int way_y){
  if(koji[way_x][way_y]==2) return 1;
  if(koji[way_x][way_y]==1) return 0;
  if(way_x > a-1 || way_y > b-1) return 0;
  return func(way_x+1,way_y) + func(way_x,way_y+1);
}