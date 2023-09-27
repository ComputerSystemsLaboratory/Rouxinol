#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,n;
  cin >> n >> k;
  long long a[n+1];
  for(i=0;i<n;i++)
  {
  	cin >> a[i];
  }
  i=0;j=k;
  while(j<n)
  {
    if(a[j]>a[i])
    {
    	 cout << "Yes" << endl;
    }
    else
    {
    	cout << "No" << endl;
    }
    i++;
    j++;
  }
  
}
  