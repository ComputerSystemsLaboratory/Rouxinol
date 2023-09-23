#include <iostream>
using namespace std;

int main()
{
 int n;
 int a[1000], b[1000], c[1000];

 cin >> n;
 for(int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i];

 for(int i=0; i<n; i++){
  if(a[i]*a[i] == b[i]*b[i] + c[i]*c[i] | b[i]*b[i] == a[i]*a[i] + c[i]*c[i] | c[i]*c[i] == a[i]*a[i] + b[i]*b[i]) cout << "YES\n";
  else cout << "NO\n";
 }

 return 0;
}