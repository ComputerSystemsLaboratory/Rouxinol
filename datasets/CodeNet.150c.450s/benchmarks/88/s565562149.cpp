#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for(ull i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define iter(i,c) for(auto i=(c).begin(); i!=(c).end(); ++i)
#define riter(i,c) for(auto i=(c).rbegin(); i!=(c).rend(); ++i)
const double eps = 1e-10;
const double pi = acos(-1.0);
const double inf = (int)1e8;

class Rect{
  public:
    int x;
    int h;
    int w;
};

int main(){
  int h,w;
  list<Rect> r;

  Rect tmp;
  //cout << r.max_size() << endl;
  rep(i,150){
    auto itr=r.begin();
    rep(j,150){
      tmp.x=pow(150-i,2)+pow(j+1,2);
      tmp.h=150-i;tmp.w=j+1;
      if(tmp.w<=tmp.h) continue;
      if(tmp.h==149) r.pb(tmp);
      else while(itr!=r.end()){
        if(itr->x>=tmp.x){
          r.insert(itr,tmp);
          break;
        }
        else itr++;
      }
      //cout << tmp.h << " " << tmp.w << endl;
    }
    //cout << j << endl;
  }

  /*auto itr=r.begin();
  rep(j,150){
    rep(i,150){
      cout << itr -> h << " " << itr -> w << endl;
      itr++;
    }
  }*/

  while(cin>>h>>w&&h+w!=0){
    auto itr=r.begin();
    while(itr->h!=h||itr->w!=w)itr++;
    itr++;
    cout << itr->h <<" " << itr->w << endl;
  }
}