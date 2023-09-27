#include <iostream>
using namespace std;

void array_swap(int a[],int n);
void swap(int& x,int& y);
int main()
{

  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++)
    cin >> a[i];

  array_swap(a,n);

  for(int i=0;i<n;i++)
    {
      cout << a[i];
      if(i==n-1)break;
      cout << " ";
    }
  cout << '\n';
  return 0;
}

void swap(int& x,int& y)
{
  int tmp=x;
  x=y;
  y=tmp;
}

void array_swap(int a[],int n)
{
  int tmp;
  for(int i=0;i<n/2;i++)
    {
      swap(a[i],a[n-1-i]);
    }
}