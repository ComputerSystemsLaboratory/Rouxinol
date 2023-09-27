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
  int n;
  while(cin>>n){
    int co=0;
    rep(a,10)rep(b,10)rep(c,10)rep(d,10)if(a+b+c+d==n)co++;
    cout<<co<<endl;
  }
}