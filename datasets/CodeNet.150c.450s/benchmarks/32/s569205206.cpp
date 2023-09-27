#include <iostream>
using namespace std;

int main(){

  int m, n_min, n_max, gap = 1000000, z;
  int ary[1000001];

  
  while(1){
    cin >> m >> n_min >> n_max;
    if(m == 0 && n_min == 0 && n_max == 0) break;

    for(int i = 1 ; i <= m ; i++){
      cin >> ary[i];
    }

    for(int i = n_min ; i <= n_max ; i++){
      if(gap >= ary[i+1] - ary[i]){
	gap = ary[i+1] - ary[i];
	z = i;
      }
    }
    cout << z << endl;
    gap = 1000000;
    z = 0;
  }

  return 0;
}