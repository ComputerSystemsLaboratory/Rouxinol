#include <iostream>
#include <cmath>
using namespace std;

int n, m, p;
int x[102];

int main(){
  while(cin >> n >> m >> p, n || m || p){
    int sum = 0;

    for(int i = 0; i < n; i++){
      cin >> x[i];
      sum += x[i];
    }

    sum *= 100 - p;

    if(x[m - 1] == 0){
      cout << 0 << endl;
    }
    else{
      cout << (int)((double)sum / x[m - 1]) << endl;
    }
  }
}