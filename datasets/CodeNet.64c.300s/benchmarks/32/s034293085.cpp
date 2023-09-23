#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n, a[10000];
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  cout << *min_element( a, a + n) << " "
       << *max_element( a, a + n) << " "
       << accumulate( a, a + n, 0LL) << endl;
}