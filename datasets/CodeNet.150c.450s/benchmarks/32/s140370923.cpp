#include <iostream>

using namespace std;

int P[10005];

int main(){
  int m, nmin, nmax;
  while(1){
    cin >> m >> nmin >> nmax;
    if(m == 0 && nmin == 0 && nmax == 0){
      break;
    }
    for(int i=0;i<m;i++){
      cin >> P[i];
    }

    int res = nmin;
    for (int i=nmin;i<=nmax;i++){
      if(P[res-1]-P[res] <= P[i-1]-P[i]){
	res = i;
      }
    }
    cout << res << endl;
  }
  return 0;
}