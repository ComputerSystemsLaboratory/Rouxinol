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
  int n,p;
  while(cin>>n>>p,n||p){
    vector<int>pe(n,0);
    int ba=p;
    int i=0;
    while(1){
      if(ba){
	pe[i]++;
	ba--;
      }
      else {
	ba=pe[i];
	pe[i]=0;
      }
      if(pe[i]==p)break;
      i++;
      if(i==n)i=0;
    }
    cout<<i<<endl;
  }
}