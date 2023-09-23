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
  int in[31]={1,1,2};
  loop(i,3,31)in[i]=in[i-1]+in[i-2]+in[i-3];

  int n;
  while(cin>>n,n){
    cout<<(in[n]-1)/3650+1<<endl;
  }

}