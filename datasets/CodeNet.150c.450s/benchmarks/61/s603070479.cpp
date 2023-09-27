#include <iostream>
using namespace std;

int main() {

  while(1){ 
  int n,a,b,c,x;
  cin >> n >> a >> b >> c >> x;
  if(n == 0 && a == 0 && b==0&&c==0&&x==0) break;

  int y[101]={};
  for(int i=0;i<n;i++) cin >> y[i];

  int ans = 0;
  int ima=0;
  while(1){
    if(x == y[ima]){
      ima++;
      if(ima == n) break;
    }
    x = (a*x+b)%c;
    ans++;
    if(ans > 10000) {
      ans = -1;
      break;
    }
  }  

  cout <<ans<<endl;
}
  return 0;
}