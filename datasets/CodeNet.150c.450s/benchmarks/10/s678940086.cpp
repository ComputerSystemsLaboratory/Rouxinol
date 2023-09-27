#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int n;
  cin >> n;
  int house[4][3][10] = {};
  int b,f,r,v;
  for(int i=0; i<n; i++){
    cin >> b >> f >> r >> v;
    house[b-1][f-1][r-1] += v;
  }

  for(int bi=0; bi<4; bi++){
    for(int fi=0; fi<3; fi++){
      for(int ri=0; ri<10; ri++){
        cout << " " << house[bi][fi][ri];
      }
      cout << endl;
    }
    if(bi != 3){
      cout << "####################" << endl;
    }
  }


}