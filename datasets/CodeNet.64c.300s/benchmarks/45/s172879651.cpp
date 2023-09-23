#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m,p;
int x[111];
int main(void){
  while(cin >> n >> m >> p){
    if(!n) break;
    int c = 0;
    for(int i = 0; i < n; i++){
      cin >> x[i];
      c += x[i];
    }
    c *= 100-p;
    cout << ((x[m-1])?c/x[m-1]:0) << endl;
  }
}