#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main(void){
  while(1){
    int n, r;
    cin >> n;
    cin >> r;
    if(n == 0 && r == 0){return 0;}

    int f[n];
    for(int i = 0 ; i < n ; i++){
      f[i] = n - i;
    }

    int p[r];
    int c[r];
    for(int i = 0 ; i < r ; i++){cin >> p[i]; cin >> c[i];}


    for(int i = 0 ; i < r ; i++){
      int tempu[p[i]-1];
      int tempd[c[i]];
      for(int j = 0 ; j < p[i]-1 ; j++){
        tempu[j] = f[j];
      }
      for(int j = 0 ; j < c[i] ; j++){
        tempd[j] = f[j + p[i] -1];
      }
      for(int j = 0 ; j < c[i] ; j++){
        f[j] = tempd[j];
      }
      for(int j = 0 ; j < p[i]-1 ; j++){
        f[j+c[i]] = tempu[j];
      }
    }

    cout << f[0] << endl;
  }
}