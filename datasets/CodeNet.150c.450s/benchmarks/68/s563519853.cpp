#include <stdio.h>
#include<algorithm>
#include<vector>
#include <iostream>
using namespace std;
int n,a[1005];
int main(){
  while(1){
    cin >> n; if(n==0) return 0;
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+n+1);
    int res = 10000000;
    for(int i=2;i<=n;i++) res = min(res,a[i]-a[i-1]);
    cout << res << endl;
  }
}