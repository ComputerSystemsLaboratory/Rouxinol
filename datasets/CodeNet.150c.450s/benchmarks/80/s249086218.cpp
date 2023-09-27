#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int ans = a+b+c+d;
  cin>>a>>b>>c>>d;
  ans = max(ans, a+b+c+d);
  cout << ans << endl;
  return 0;
}