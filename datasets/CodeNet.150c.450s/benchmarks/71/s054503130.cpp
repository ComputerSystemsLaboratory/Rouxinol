#include<iostream>
using namespace std;

int main(){

  int n;
  int comb[4][51] = {0};

  for(int i=0; i<10; i++){
    comb[0][i] = 1;
  }

  for(int i=1; i<4; i++){
    for(int j=0; j<9*i+10; j++){
      for(int k=0; k<10; k++){
        if(j-k>=0){
          comb[i][j] += comb[i-1][j-k];
        }
      }
    }
  }

/*  for(int i=0; i<4; i++){
    for(int j=0; j<51; j++){
      cout << comb[i][j] << " ";
    }
    cout << endl;
  }
*/

  while(cin >> n){
    cout << comb[3][n] << endl;
  }

  return 0;
}