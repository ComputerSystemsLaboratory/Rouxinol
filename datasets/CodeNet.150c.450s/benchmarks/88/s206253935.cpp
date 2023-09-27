#include<algorithm>
#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define int long long
using namespace std;
long long k=1000000007;


signed main(){
  int H,W;
  while(cin>>H>>W,H) {
    int r=H*H+W*W;
    int f=1;
    while(1){
      for(int h=1;h<r;h++) {
	if (f&&h<=H)continue;
	int X=r-h*h; // X=w*w
	if (X>h*h) // satisfies w>h ?
	  for(int i=0;i*i<=X;i++)
	    if (i*i==X) { // is sqrt ?
	      cout<<h<<' '<<i<<endl;
	      goto wwwww;
	    }
      }
      r++;
      f=0;
    }
  wwwww:;
  }
  return 0;
}