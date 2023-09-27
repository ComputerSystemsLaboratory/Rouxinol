#include <iostream>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int n,b,f,r,v;
  cin >> n;
  int house[4][3][10];
  REP(i,4){
    REP(j,3){
      REP(k,10){
        house[i][j][k]=0;
      }
    }
  }
  REP(i,n){
    cin >> b >> f >> r >> v;
    house[b-1][f-1][r-1]=house[b-1][f-1][r-1]+v;
    if(house[b-1][f-1][r-1]>10)
      house[b-1][f-1][r-1]=9;
  }
  REP(i,4){
    REP(j,3){
      REP(k,10){
        cout <<" "<< house[i][j][k];
      }
      cout << endl;
    }
    if(i!=3)
    cout << "####################" <<endl;
  }
}