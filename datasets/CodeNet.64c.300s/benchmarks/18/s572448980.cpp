#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb(in,tmp) in.push_back(tmp)
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
using namespace std;
int main(){
  int a[31]={1,1,2};
  int n;
  loop(i,3,31)a[i]=a[i-1]+a[i-2]+a[i-3];
  while(cin>>n,n)cout<<(a[n]-1)/365/10+1<<endl;

}