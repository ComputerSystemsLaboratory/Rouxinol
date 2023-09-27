#include<iostream>

using namespace std;

#define rep(i,n) for(i=0;i<(n);i++)
#define For(i,a,b) for(i=(a);i<(b);i++)

int main(){
  int i,j,k;
  int a,b,c;
  cin >> a >> b >> c;
  if(a<b && b<c) cout << "Yes";
  else cout << "No";
  cout << endl;
  
  return 0;
}