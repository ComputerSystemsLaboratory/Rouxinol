#include<iostream>
using namespace std;

int main(){

  int i,j,n,a,b,c,x,y[10001];
  while(1){
    int count=1;
    x=0;
  cin >> n >>a >> b >> c >> x;
  if(n==0 && a==0 && b==0 && c==0 && x==0)break;
  
  for(i = 1; i <= n; i++){
    cin >> y[i];
  }

  for(i = 1;; i++){
    if(i>10001){
      cout << -1 << endl;
      break;
    }
    if(x==y[count])count++;
    if(count==n+1){
      cout << i-1 << endl;
      break;
    }
    x = (a*x+b)%c;
  }

  

    }
  return 0;
}