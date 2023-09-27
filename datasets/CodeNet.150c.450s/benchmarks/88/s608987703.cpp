#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
    int h,w;
    cin >> h >>w;
    if(h==0) break;
    int len=h*h+w*w;
    bool flag=false;
    int resh=300,resw=300;
    for(int hei=1;hei<250;hei++){
      for(int wid=hei+1;wid<255;wid++){
        if(len<hei*hei+wid*wid && hei*hei+wid*wid<resh*resh+resw*resw){
          resh=hei;
          resw=wid;
        }
        else if(len==hei*hei+wid*wid && hei>h) {
          flag =true;
          resh=hei;resw=wid;
        }
        if(flag) break;
      }
      if(flag) break;
    }
    cout << resh << " " << resw << endl;
  }
}