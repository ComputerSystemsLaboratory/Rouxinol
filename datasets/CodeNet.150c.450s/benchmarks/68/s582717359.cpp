#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define INF 1e9;

int main(){
  int n;
  while(true){
    cin >> n;
    if(n == 0)
      break;
    
    vector<int> a(n);
    for(int i=0; i<n; i++)
      cin >> a[i];

    int nmin = INF;
    for(int i=0; i<n-1; i++)
      for(int j=i+1; j<n; j++)
        nmin = min(nmin, (int)abs(a[i] - a[j]));

    cout << nmin << endl;
  }
             
  return 0;
}