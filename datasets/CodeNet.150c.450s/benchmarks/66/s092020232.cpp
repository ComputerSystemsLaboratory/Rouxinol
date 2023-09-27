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
  string s;
  set<string> keys;
  cin>>n;
  rep(i,n){
    cin>>s;
    keys.insert(s);
  }
  cin>>n;
  bool now = true;
  rep(i,n){
    cin>>s;
    //    cout<<keys.find(s)<<endl;
    if(keys.find(s)!=keys.end()){
      if(now){
	cout<<"Opened by ";
      }else{
	cout<<"Closed by ";
      }
      now = !now;
    }else{
      cout<<"Unknown ";
    }
    cout<<s<<endl;
  }


}