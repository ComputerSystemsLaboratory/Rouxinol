#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int f(int x,int y,int z){
  return x*x + y*y + z*z + x*y + y*z + z*x;
}

void output_ans(int n) {

  int s = (int)sqrt(2*n);
  int m = (int)sqrt(n/3);
  //cout << s << m<< endl;

  int ans = 0;
  for(int x=1; x<=m; x++){
    for(int y=x; x+2*y<=s; y++){
      for(int z=y; x+y+z<=s; z++){
        //out << "x,y,z = (" << x << "," << y << "," << z << ")" << endl; 
        //cout << f(x,y,z) << endl;
        if(f(x,y,z)==n) {
          if(x==y && y==z) ans++;
          else if(x==y || y==z || z==x)  ans+=3;
          else  ans += 6;
        } 
      }
    }
  }
  cout << ans << endl;
  return;
}

int main(){
  int n;
  cin >> n;
  for(int i=1; i<=n; i++)  output_ans(i);
}