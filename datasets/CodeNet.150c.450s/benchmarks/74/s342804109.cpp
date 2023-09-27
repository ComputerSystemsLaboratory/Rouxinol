#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;

  cin >> n >> m;

  int T[n+1];
  int c[m];
  for(int j = 0;j < m;j++)cin >> c[j];

  for(int i = 0;i <= n;i++)T[i] = 50001;

  T[0] = 0;

  for(int i = 0;i < m;i++){
    for(int j = c[i];j <= n;j++){
      T[j] = min(T[j],T[j - c[i]]+1);
    }
  }

  cout << T[n] << endl;
}


  