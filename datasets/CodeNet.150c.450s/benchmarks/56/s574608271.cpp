#include<iostream>

using namespace std;

int min(int *a, int n)
{
  int v = 1000000;
  for ( int i = 0; i < n; i++ )
    {
      if ( v > a[i] )
        {
          v = a[i];
        }
    }
  return v;
}

int max(int *a, int n)
{
  int v = -1000000;
  for ( int i = 0; i < n; i++ )
    {
      if ( v < a[i] )
        {
          v = a[i];
        }
    }
  return v;
}

long long sum(int *a, int n)
{
  long long v = 0;
  for ( int i = 0; i < n; i++ )
    {
      v += a[i];
    }
  return v;
}

int main()
{
  int a[10000];
  int n;
  
  cin >> n;

  for ( int i = 0; i < n; i++ )
    {
      cin >> a[i];
    }

  cout << min(a, n) << " " << max(a, n) << " " << sum(a, n) << endl;
  
  return 0;
}