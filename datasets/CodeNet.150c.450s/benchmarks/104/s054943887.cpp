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
typedef long long int LLI;
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  int n,m;
  char d;
  cin>>n>>m;
  vector<int>out(n);
  rep(i,n)out[i]=i+1;
  rep(i,m){
    int a,b;
    cin>>a>>d>>b;
    swap(out[a-1],out[b-1]);
  }
  rep(i,n)cout<<out[i]<<endl;
}