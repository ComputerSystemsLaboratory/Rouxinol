#include<bits/stdc++.h>
using namespace std;
const int INF = (1<<30);

int main()
{
  int n;
  while( cin >> n, n ) {
    int ma = 0, mi = INF, sum = 0, data;

    for(int i=0; i<n; i++) {
      cin >> data;
      sum += data;
      if( data > ma ) ma = data;
      if( data < mi ) mi = data;
    }
    
    sum = sum - ma - mi;
    cout << sum / (n-2) << endl;
  }

} 