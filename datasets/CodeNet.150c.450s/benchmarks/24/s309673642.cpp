#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int n,m;
int p;

int main()
{

  

  while(cin >> n >> m && n){

    pair<int,int> a[10000];

    for (int i = 0; i < n; ++i)
    {
      cin >> a[i].second >> a[i].first;
    }

    sort(a,a+n);
    reverse(a,a+n);
    
    for (int i = 0; i < n; ++i)
    {

      if(m >= a[i].second)m -= a[i].second;
      else if( m == 0 ) p += a[i].second * a[i].first;
      else{
        a[i].second -= m;
        m = 0; 
        p += a[i].second * a[i].first;
      }

    }

cout << p << endl;
p=0; //????????????????????????



}
  return 0;
}