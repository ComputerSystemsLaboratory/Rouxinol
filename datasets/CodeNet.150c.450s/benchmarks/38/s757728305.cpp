#include <iostream>
using namespace std;

int main(){
  int a[3], n, mx;
  cin >> n;
  while(n--){
    cin >> a[0] >> a[1] >> a[2];
    mx = max(max(a[0],a[1]),a[2]);
    if(a[0]==mx)
      a[0]=0;
    else if(a[1]==mx)
      a[1]=0;
    else
      a[2]=0;
    if(mx*mx == a[0]*a[0]+a[1]*a[1]+a[2]*a[2])
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}