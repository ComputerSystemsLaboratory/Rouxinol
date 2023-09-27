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
  int a=0,b=0,c;
  cin>>c;
  rep(i,c){
    string d,e;
    cin>>d>>e;
    if(d<e){b+=3;}
    else if(d==e){a++;b++;}
    else {a+=3;}
  }
  cout<<a<<" "<<b<<endl;
}