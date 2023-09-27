#include<iostream>
#include<vector>
#include<algorithm>
#define all(c) (c).begin(),(c).end()

using namespace std;

int main(void){

  int m,nmin,nmax;

  while(cin >> m >> nmin >> nmax, m){
    vector<int>v(m);
    for(int i=0;i<m;i++)cin >> v[i];
    sort(all(v),greater<int>());
    int gap = 0, ans = 0;
    for(int i=nmax;i>=nmin;i--){
      if(v[i-1]-v[i] > gap)gap = v[i-1]-v[i], ans = i;
    }
    cout << ans << endl;
  }
  
  return 0;
}