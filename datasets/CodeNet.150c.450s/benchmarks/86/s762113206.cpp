#include <iostream>
#include <vector>
using namespace std;
int main(void){
  int n, m, p, total, ans;
  while(true){
    cin >> n >> m >> p;
    if(n == 0 && m == 0 && p == 0){
      break;
    }
    vector<int> x(n, 0);	
    for(int i = 0; i < n; i++){
      cin >> x[i];
    }
    total = 0;
    for(int i = 0; i < n; i++){
      total = total + x[i];
    }	
    total = total * 100;
    if(x[m - 1] == 0){ 
      cout << 0 << endl;
      continue;
    }
    int rem = (total * (100 - p)) / 100;
    cout << rem / x[m-1] << endl;
  }
  return 0;
}	