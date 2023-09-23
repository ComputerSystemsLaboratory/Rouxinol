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
  unsigned long long ary[35] = {0};
  int n; 
  ary[0] = 1; 
  ary[1] = 1;
  ary[2] = 2;
  loop(i,3,35){
    ary[i] = ary[i-1] + ary[i-2] + ary[i-3];
    //  cout<<i<<" "<<ary[i]<<" "<<ary[i]/365<<endl;
  }

 
  while(cin>>n,n){
    cout<<ary[n]/3650+(ary[n]%3650?1:0)<<endl;
  }
}