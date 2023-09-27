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
  int n;
  cin>>n;
  rep(i,n){
    vector<int>in(3);
    rep(i,3)cin>>in[i];
    sort(all(in));
    string ans;
    if(in[0]*in[0]+in[1]*in[1]==in[2]*in[2])ans="YES";
    else ans="NO";
    cout<<ans<<endl;
  }


}