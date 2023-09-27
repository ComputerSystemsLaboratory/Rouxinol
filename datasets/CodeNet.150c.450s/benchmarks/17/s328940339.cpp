#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int a[5];

  for(int i=0;i < 5;i++)
    {
      cin >> a[i];
    }
  sort(a,a+5);

  for(int i=4;i > -1;i--)
    {
      cout << a[i];
      if(i)cout << " ";
    }
  cout << endl;
  
  return 0;
}
