#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define ALL(a) (a).begin(),(a).end()
#define F first
#define S second
typedef pair<int,int> PI;

int main(){
  
  vector<pair<int,PI> > in;
  
  rep(i,150)rep(j,150){
    int h=i+1;
    int w=j+1;
    if(w > h)
      in.pb(mp(h*h+w*w,mp(h,w)));
  }

  sort(ALL(in));
  
  int h,w;
  while(cin >> h >> w && h){
    vector<pair<int,PI> >::iterator p=upper_bound(ALL(in),mp(h*h+w*w,mp(h,w)));
    cout << p->S.F << " " << p->S.S << endl;
  }
}