#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
using namespace std;
bool debug=false;

int main(){
  int n,m;
  map<string,int> mp;
  cin>>n;
  rep(i,0,n){
    string s;
    cin>>s;
    mp[s]=1;
  }
  cin>>m;
  int cnt=0;
  rep(i,0,m){
    string s;
    cin>>s;
    if(mp[s]&&cnt%2==0){
      cout<<"Opened by "<<s<<endl;
      cnt++;
    }else if(mp[s]!=0&&cnt%2==1){
      cout<<"Closed by "<<s<<endl;
      cnt++;
    }else{
      cout<<"Unknown "<<s<<endl;
    }
  }
  return 0;
}