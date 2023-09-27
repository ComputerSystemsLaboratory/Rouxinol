#include <iostream>
using namespace std;
int main(){
  int n,a,b,c,x;
  while(cin >> n >> a >> b >> c >> x, n!=0){
    int y[n];
    int cnt=0,id=0;
    for(int i=0;i<n;i++){
      cin >> y[i];
    }
    while(id<n){
      if(y[id]==x){
	id++;
      }
      x = (a*x+b)%c;
      cnt++;
      if(cnt>10000)break;
    }
    cnt--;
    if(id<n){
      cout << -1 << endl;
    }else{
      cout << cnt << endl;
    }
  }
}