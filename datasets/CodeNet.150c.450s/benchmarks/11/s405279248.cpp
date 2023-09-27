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
 
  char a[4]={'S','H','C','D'};
  map<char,vector<int> >in;
  int n;
  cin>>n;
  rep(i,n){
    char d;
    int m;
    cin>>d>>m;
    in[d].pb(m-1);
  }
  rep(i,4){
    sort(all(in[a[i]]));
  }
  rep(j,4)for(int i=-1;i<12;){
    i++;
    if(in[a[j]].size()==0||i!=in[a[j]][0])cout<<a[j]<<" "<<i+1<<endl;
    else in[a[j]].erase(in[a[j]].begin());
  }
}