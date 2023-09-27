#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>
#include<numeric>
#include<queue>
#include<string>
#include<sstream>

using namespace std;

int main(void) {

  int n;
  while(cin >> n){
    if( n == 0 ) break;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int diff = 10000000;
    for(int i=1; i<n; i++){
      diff = min(diff, a[i]-a[i-1]);
    }
    cout << diff << endl;
  }



  return 0;
}










//