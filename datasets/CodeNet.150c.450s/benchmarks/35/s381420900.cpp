#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n,a[10000],ans,c;

  while(cin >> n, n){
    
    for(int i=0;i<n;i++) cin >> a[i];

    ans = a[0];

    for(int i=0;i<n;i++){
      c = 0;
      for(int j=i;j<n;j++){
	c += a[j];
	ans = max(ans,c);
      }
    }

    cout << ans << endl;

  }
}