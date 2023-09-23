#include<iostream>
#include<cmath>

#define N 1000000

using namespace std;

int main(){

  int n, root;
  int p[N][2] = {0};

  for(int i=2; i<N; i++){
    p[i][0] = 1;
  }

  for(int i=2; i<N; i++){
    root = (int)sqrt(i) + 1;
    for(int j=2; j<root; j++){
      if(p[j][0] == 1){
        if(i % j == 0){
          p[i][0] = 0;
          break;
        }
      }
    }
  }

  for(int i=2; i<N; i++){
    p[i][1] = p[i-1][1] + p[i][0];
  }

//  for(int i=0; i<30; i++){
//    cout << i << " " << p[i][0] << endl;
//  }

  while(cin >> n){
    cout << p[n][1] << endl;
  }

  return 0;
}