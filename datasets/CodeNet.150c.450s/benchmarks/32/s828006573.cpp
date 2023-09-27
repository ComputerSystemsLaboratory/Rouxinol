#include <iostream>
#include <vector>
using namespace std;

int main(){
  while(true){
    int m, nmin, nmax;
    cin >> m >> nmin >> nmax;

    if(m == 0)
      break;

    vector<int> p(m);
    for(int i=0; i<m; i++)
      cin >> p[i];

    int amax = 0, ans;
    for(int i=nmin; i<=nmax; i++){
      if(p[i-1] - p[i] >= amax){
	amax = p[i-1] - p[i];
	ans = i;
      }
    }

    cout << ans << endl;
  }
  
  return 0;
}