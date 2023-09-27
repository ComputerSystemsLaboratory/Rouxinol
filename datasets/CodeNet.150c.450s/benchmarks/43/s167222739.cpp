#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int a=0,b=0,x,y,n;

  while(cin >> n){
    if(n==0)break;

    a=b=0;

    for(int i=0;i<n;i++){
      cin >> x >> y;

      if(x!=y){
	if(x==max(x,y)) a=a+x+y;
	if(y==max(x,y)) b=b+x+y;
      }

      else{
	a=x+a;
	b=x+b;
      }

    }
    cout << a << ' ' <<  b << endl;
  }
}