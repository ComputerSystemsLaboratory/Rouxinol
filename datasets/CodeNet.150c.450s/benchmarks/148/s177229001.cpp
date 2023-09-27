#include<bits/stdc++.h>
using namespace std;
#define deb(x)   cout<<"> "<<#x<<" : "<<x<<endl;
#define deb2(x,y)cout<<"> "<<#x<<"->"<<x<<"  "<<#y<<"->"<<y<<endl;
#define LINE   cout << "--- LINE NO : " << __LINE__ <<"  ---"<< endl;
#define pnr(a)   for(auto x:a){cout<<x<<" ";}cout<<endl;
#define pnr2(a)  for(auto x:a){cout<<x.first<<" "<<x.second<<endl;}
#define   pi       2*acos(0.0)
#define   inf      (int)1e18
const int mod =    1e9 + 7,
          mxn =    2e5 + 5;

#define   vt       vector
#define   ff       first
#define   ss       second
#define   int      long long
#define   db       long double
#define   umap     unordered_map
#define   pii      pair<int,int>
#define   Maxpq(x) priority_queue<x>
#define   Minpq(x) priority_queue<x,vt<x>,greater<x>>

#define   endl     "\n"
#define   pb       push_back
#define   si(x)    (int)x.size()
#define   all(x)   x.begin(),x.end()
#define   rall(x)  x.rbegin() ,x.rend()
#define   mem(a,x) memset(a,x,sizeof(a))
#define   forr(i,n) for(int i=0;i<n;i++)
#define   FOR(a)   for(auto& x :  a )

int mainx() {
  int n;
  cin >> n;
  map<string , int > mp;
  forr(i , n)
  {
    string s;
    cin >> s;
    mp[s]++;
  }
  cout << "AC x " << mp["AC"] << endl;
  cout << "WA x " << mp["WA"] << endl;
  cout << "TLE x " << mp["TLE"] << endl;
  cout << "RE x " << mp["RE"] << endl;
  return 0;
}


bool cmp(pii &a , pii &b) {
  if (a.ff < b.ff)return true;
  if (a.ff == b.ff )return a.ss < b.ss;
  return false;
}
inline void INCLUDE() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
//freopen("out.txt","w",stdout);
#endif
}
int32_t main() {

 // INCLUDE();

  ios::sync_with_stdio(0);
  cin.tie(NULL); cout.tie(NULL);
  //cout << fixed << setprecision(20);

  int tt = 1;
  //cin>>tt;
  for (int t = 1 ; t <= tt ; t++ )
  {
    // cout<<"Case #"<<t<<": ";
    mainx();
  }
  return 0 ;
}

