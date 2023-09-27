#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K,i;
  cin >> N >> K;
  
  vector<int> a(N);

  for(i=0;i<N;i++)
    cin >> a[i];
  
  for(i=0;i<N-K;i++)
    if (a[i] < a[K+i])
      cout << "Yes" << endl;
  	else
      cout << "No" << endl;

  return 0;
  
}