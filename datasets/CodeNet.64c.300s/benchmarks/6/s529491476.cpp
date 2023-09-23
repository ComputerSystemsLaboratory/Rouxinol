#include <iostream>
#include <stdlib.h>
using namespace std;

int oh[4][3][10]={};

int main(){
  
  int n;
  cin >> n;

  int b,f,r,v;

  for(int i=0; i<n; i++){
    cin >> b >> f >> r >> v;

    oh[b-1][f-1][r-1] += v;
    if(oh[b-1][f-1][r-1] < 0){
      oh[b-1][f-1][r-1] = 0;
    }else if(oh[b-1][f-1][r-1] > 9){
      oh[b-1][f-1][r-1] = 9;
    }
  }

  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      for(int k=0; k<10; k++){
        cout << " " << oh[i][j][k];
        if(k==9){
          cout << endl;
        }
      }
    }
    if(i!=3){
      cout << "####################" << endl;
    }
  }
  
}