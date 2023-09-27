#include <iostream>

using namespace std;

class CountingSort
{
 public:
  void solve( int n, int* a, int* b, int k );
};

void CountingSort::solve( int n, int* a, int* b, int k )
{
  int *c = new int[k+1];

  for ( int i=0; i<=k; i++ )
    c[i] = 0;

  for ( int i=0; i<n ; i++ )
    c[a[i]]++;

  for ( int i=1; i<k; i++ )
    c[i] += c[i-1];

  for( int i=n-1; i >= 0; i-- )
    {
      b[c[a[i]]-1] = a[i];
      c[a[i]]--;
    }
  
  return;
}

int main( void )
{
  int n, k;
  int *a, *b;

  CountingSort *cs = new CountingSort();

  k = 10000;
  
  cin >> n;

  a = new int[n];
  b = new int[n];
    
  for(int i=0; i<n; i++)
    cin >> a[i];

  cs -> solve( n, a, b, k );
  
  for(int i=0; i<n; i++)
    if (i == n-1)
      cout << b[i] << endl;
    else
      cout << b[i] << " ";

  delete cs;

  return 0;
}