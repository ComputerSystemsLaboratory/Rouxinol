#include <iostream>
using namespace std;
int main(){
  int n,a,b,c,x,xn,y[100],i,endcnt,flag;
  while(1){
    flag=0;
    endcnt=0;
    cin >> n >> a >> b >> c >> x;
    if(n==0&&a==0&&b==0&&c==0&&x==0) break;
    for(i=0;i<n;i++){
      cin >> y[i];
    }
    i=0;
    xn=x;
    while(1){
      if(xn==y[i]){
        i++;
      }
      if(i==n){
	flag=1;
        break;
      }
      endcnt++;
      if(endcnt==10001){
	break;
      }
      xn=(a*x+b)%c;
      x=xn;
    }
    if(flag==0) cout << -1 << endl;
    else cout << endcnt << endl;
  }
  return 0;
}