#include<iostream>
#include<iomanip>
#include<memory>
#include<array>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
  int w, n;
  int a, b;
  char c;
  
  array<int, 30> kuji;
  
  cin >> w;
  cin >> n;

  for ( int i = 0; i < kuji.size(); i++ )
    kuji[i] = i+1;
  
  for ( int i = 0; i < n; i++ )
    {
      cin >> a >> c >> b;
      swap( kuji[a-1], kuji[b-1] );
    }

  for ( int i = 0; i < w; i++ )
    cout << kuji[i] << endl;

  return 0;
}