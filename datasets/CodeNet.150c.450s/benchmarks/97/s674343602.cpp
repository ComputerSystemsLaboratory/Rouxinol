#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int N,n,d;
  int x[200],y[200];
  int a,b,l,r;

  while(cin >> N,N){
    x[0] = y[0] = 0;
    a = b = l = r = 0;
    for(int i=1;i<N;i++){
      cin >> n >> d;
      if(d==0){
	x[i] = x[n]-1;
	y[i] = y[n];
      }else if(d==1){
	x[i] = x[n];
	y[i] = y[n]-1;
      }else if(d==2){
	x[i] = x[n]+1;
	y[i] = y[n];
      }else{
	x[i] = x[n];
	y[i] = y[n]+1;
      }
      a = min(a,y[i]);
      b = max(b,y[i]);
      l = min(l,x[i]);
      r = max(r,x[i]);
    }
    cout << r-l+1 << " " << b-a+1 << endl;
  }
}