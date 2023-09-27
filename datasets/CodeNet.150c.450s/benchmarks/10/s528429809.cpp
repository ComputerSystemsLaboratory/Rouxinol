#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  int data[9][9][11] = {}; //[b][f][r]
  int b, f, r;
  int v;
  int n;

  cin >> n;
  while(n--){
    cin >> b >> f >> r >> v;
    data[b][f][r] += v;
  }

  for(int i=1;i<5;i++){
    for(int j=1;j<4;j++){
      for(int k=1;k<11;k++) printf(" %d", data[i][j][k]);
      cout << endl;
    }

    if(i != 4){
      for(int j=20;j--;) cout << "#";
      cout << endl;
    }
  }

}