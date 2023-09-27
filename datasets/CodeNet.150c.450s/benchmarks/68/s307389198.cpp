#include <iostream>
#include <cstdlib>
using namespace std;

int n;
long long int a[1001];

int main(){
  while(cin>>n&&n){

    for(int i = 0; i < n; ++i){
      cin >> a[i];
    }

    long long int ans = 1000001;

    for(int i = 0; i < n-1; ++i){
      for(int j = i + 1; j < n; ++j){
        if(ans > abs(a[j]-a[i])){
          ans = abs(a[j]-a[i]);
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}