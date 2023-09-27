#include <iostream>
using namespace std;

int main()
{
int n,k;
cin >> n >> k;
while(n!=0||k!=0){
  int i=0, a[n], S[n-1];
  S[0] = 0;
  while(i < n){
    cin >> a[i];
    if (i>=1)
      S[i] = S[i-1]+a[i-1];
    i++;
  }
  i = 0;
  int m = S[k]-S[0];
  while(k+i<n){
    if (m < S[i+k]-S[i])
      m = S[i+k]-S[i];
    i++;
  }
  cout << m << endl;
cin >> n >> k;
}}


