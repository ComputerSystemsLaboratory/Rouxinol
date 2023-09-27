#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<string>
#include<algorithm>
#include<utility>
#include<math.h>
#include<iomanip>
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
const int INF = pow(10, 8);
int main(){
  int n;cin>>n;
  while(n--){
    double ax, ay, bx, by, cx, cy, dx, dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
    bx-=ax;by-=ay;dx-=cx;dy-=cy;
    if(abs(bx*dy-dx*by)<1e-10)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}

