#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define rep(i,m,n) for(int i=m;i<n;i++)
#define co(n) cout<<n<<endl
#define all(n) (n).begin(),(n).end()
#define pb(n,m) n.push_back(m)
#define pi(n,m) n.insert(n.begin(),m);
#define ee(n) n.erase(n.end()-1)
#define eb(n) n.erase(n.begin())
using namespace std;
//using bint=boost::multiprecision::cpp_int;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int n; cin>>n;
  vector<int> a(n);
  rep(i,1,101){
    rep(j,i,101){
      rep(k,j,101){
        int x=i*(i+j)+j*(j+k)+k*(k+i);
        if(x<=n){
          if(i==j && j==k) a[x-1]++;
          else if(i!=j && j!=k && k!=i) a[x-1]+=6;
          else a[x-1]+=3;
        }
      }
    }
  }
  rep(i,0,n) co(a[i]);
  
  return 0;
}