#include <iostream>
#include <algorithm>
#define INF 1<<21
using namespace std;

int main(){
  while (1){
    int n;
    cin >> n;
    if (n == 0) break;
    int res = INF;
    int i, j;
   
    for (i = 0;; i++){
      int tmp = n;
      tmp -= i*i*i;
      if (tmp<0) break;
      for (j = 0;; j++){
	if (j*j > tmp) break;
      }
      j--;
      tmp -= j*j;
      res = min(res, i+j+tmp);
    }

    cout << res << endl;
  }
  return 0;
}