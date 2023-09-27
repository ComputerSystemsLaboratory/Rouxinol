#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;


int main(void) {

  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];

  for(int i=n-1; i>=0; i--){
    if( i != 0 ) cout << a[i] << " ";
    else cout << a[i] << endl;
  }

  return 0;
}