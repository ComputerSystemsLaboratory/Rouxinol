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
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int n;
  cin>>n;
  vector<string>ch(n);
  for(int i=0;i<n;i++)
    cin>>ch[i];
  bool flag=false;
  int m;cin>>m;
  for(int i=0;i<m;i++){
    string str;cin>>str;
    int j;
    for(j=0;j<n;j++){
      if(ch[j]==str){
	if(flag){
	  cout<<"Closed by"<<" "<<str<<endl;
	  flag=false;
	  break;
	}else{
	  cout<<"Opened by"<<" "<<str<<endl;
	  flag=true;
	  break;
	}
      }
    }
    if(j==n)
      cout<<"Unknown"<<" "<<str<<endl;
  }
  return 0;
}
