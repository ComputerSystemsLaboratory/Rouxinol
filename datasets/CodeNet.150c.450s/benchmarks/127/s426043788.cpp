#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#include<map>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int n;cin>>n;
  for(int i=0;i<n;i++){
    string s;cin>>s;
    ll ans=0;
    map<string,int>used;
    for(int j=1;j<s.size();j++){
      string s2=s.substr(0,j);
      string s3=s.substr(j,s.size()-j);
      string str=s2+s3;
      if(used.find(str)==used.end()){
	ans++;
	used[str]=1;
      }
      //cout<<s2<<" "<<s3<<endl;
      str=s3+s2;
      //cout<<s2<<" "<<s3<<endl;
      if(used.find(str)==used.end()){
	ans++;
	used[str]=1;
      }
      reverse(s3.begin(),s3.end());
      str=s2+s3;
      //cout<<s2<<" "<<s3<<endl;
      if(used.find(str)==used.end()){
	ans++;
	used[str]=1;
      }
      str=s3+s2;
      //cout<<s2<<" "<<s3<<endl;
      if(used.find(str)==used.end()){
	ans++;
	used[str]=1;
      }
      reverse(s2.begin(),s2.end());
      str=s2+s3;
      //cout<<s2<<" "<<s3<<endl;
      if(used.find(str)==used.end()){
	ans++;
	used[str]=1;
      }
      str=s3+s2;
      //cout<<s2<<" "<<s3<<endl;
      if(used.find(str)==used.end()){
	ans++;
	used[str]=1;
      }
      reverse(s3.begin(),s3.end());
      str=s2+s3;
      //cout<<s2<<" "<<s3<<endl;
      if(used.find(str)==used.end()){
	ans++;
	used[str]=1;
      }
      str=s3+s2;
      //cout<<s2<<" "<<s3<<endl;
      if(used.find(str)==used.end()){
	ans++;
	used[str]=1;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

