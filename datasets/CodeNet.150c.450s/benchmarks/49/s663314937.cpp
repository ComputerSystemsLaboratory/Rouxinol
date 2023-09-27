#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<random>
#include<map>
#include<queue>
using namespace std;

int main(){

  int n;
  while(cin >> n){
    if( n == 0 ) break;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int sum = accumulate(a.begin(), a.end(), 0) - *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());

    sum /= n-2;
    cout << sum << endl;
  }

  return 0;
}