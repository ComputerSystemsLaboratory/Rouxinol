#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n;
int a[50001];
int S[50001];


int main(){

while(cin >> n && n > 0){


  int max = -100000;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    if( a[i] > max) max = a[i];
  }

  S[0] = 0;
  for (int i = 0; i < n ; ++i)
  {
    S[i + 1] = S[i] + a[i];
    
  }


  for (int i = 0; i < n + 1; ++i)
  {
    for (int k = 0; k < i ; ++k)
    {
      if(S[i] - S[k] > max) max = S[i] - S[k];
    }
  }

  cout << max << endl;

  }
}