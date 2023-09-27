#include <iostream>

using namespace std;

int main(){
  int n,a,b,c,x;
  cin >> n >> a >> b >> c >> x;
  while(1){
    if(n==0)break;
    int y[n];
    for(int i=0;i<n;i++)cin >> y[i];
    int i,j=0,ret=0,ch;
    for(i=0;i<=10000;i++){
      if(x==y[j]){
        ret = i;
        j++;
        if(j==n)break;
      }
      x = (a*x+b)%c;
    }
    if(j==n)cout << ret << endl;
    else cout << -1 << endl;
    cin >> n >> a >> b >> c >> x;
  }
  return 0;
}

