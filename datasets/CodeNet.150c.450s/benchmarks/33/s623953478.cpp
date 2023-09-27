#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,a,b) for(int i=a;i<b;i++)
int main(){

  while(1){
    int x,y,s;
    cin >> x >> y >> s;
    if(x==0 && y==0 && s==0)break;
    int max=0;
    for(int i=1;i<s;i++){
      for(int j=1;j<s && i+j<=s;j++){
	if(i*(100+x)/100 + j*(100+x)/100 == s){
	  if(i*(100+y)/100 + j*(100+y)/100 > max){
	    max = i*(100+y)/100 + j*(100+y)/100;
	  }
	}
      }
    }
    cout << max << endl;
  }
  return 0;
}