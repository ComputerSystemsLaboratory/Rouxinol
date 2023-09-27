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
  int n,m,r;
  while(cin>>n>>m>>r,n||m||r){
    double sum=0;
    vector<int>in(n);
    rep(i,n){cin>>in[i];sum+=in[i];}
    sum*=(100-r);
    if(in[m-1])cout<<(int)(sum/in[m-1])<<endl;
    else cout<<0<<endl;
  }


}