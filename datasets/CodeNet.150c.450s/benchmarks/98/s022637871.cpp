#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  while( cin >> n >> m, n && m ) {
    int sum1 = 0, sum2 = 0;
    int s1[100], s2[100];
    int a = 1e8, b = 1e8;
    
    for(int i=0; i<n; i++) cin >> s1[i], sum1 += s1[i];
    for(int i=0; i<m; i++) cin >> s2[i], sum2 += s2[i];

    for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
	if( (s1[i] - s2[j]) * 2 == sum1 - sum2 && a + b > s1[i] + s2[j] ) a = s1[i], b = s2[j];
      }
    }

    if( a == 1e8 ) cout << -1 << endl;
    else cout << a << " " << b << endl;
  }
}