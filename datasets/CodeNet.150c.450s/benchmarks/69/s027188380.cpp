#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  int n;cin>>n;
  rep(i,n){
    bool out=true;
    vector<int>a(1,0);
    vector<int>b(1,0);
    rep(j,10){
      int in;cin>>in;
      if(a[a.size()-1]<in)a.pb(in);
      else if(b[b.size()-1]<in)b.pb(in);
      else out=false;
    }
    if(out)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

}