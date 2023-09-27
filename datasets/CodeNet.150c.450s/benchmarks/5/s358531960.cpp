#include <iostream>

using namespace std;

int main()
{
  int i=1;
  int n;
  int a[100]={0};
  
  cin >> n;
  for(i=0;i<n;i++)
  {
    cin >> a[i];
  }
  
  for(i=0;i<n;i++)
  {
    cout << a[n-i-1];
    if(i<(n-1))
    {
      cout << " ";
    }
  }
  cout <<"\n";
}