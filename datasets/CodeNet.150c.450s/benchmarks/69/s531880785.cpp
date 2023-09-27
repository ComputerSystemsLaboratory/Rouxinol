#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a;
  int f = 0;
  int b = 0 ,c = 0;
  cin >> n;
  for(int j = 0;j < n;j++){
    f = 0;
    b = 0;
    c = 0;
    for(int i = 0;i < 10;i++){
      cin >> a;
      if(b < a)b = a;
      else if(c < a)c = a;
      else {
	f = 1;	
      }  
    }
    if(f == 1)cout << "NO" << endl;
    else cout << "YES" << endl;
  }
  return 0;
}