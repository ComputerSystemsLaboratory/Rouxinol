#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){

  while(true){
    int n;   cin >> n;
    if(n == 0)   break;

    vector<long> a(n);
    for(int i = 0 ; i < n ; i++)   cin >> a[i];
    sort(a.begin() , a.begin() + n);

    long ans = 1000000;
    for(int i = 1 ; i < n ; i++)
      ans = min(ans , a[i] - a[i - 1]);

      cout << ans << endl;
    }

  return 0;
}

