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
  while(cin>>n,n){
    bool flag=true;
    int cnt=0;
    bool le=false;
    bool ri=false;
    for(int i=0;i<n;i++){
      string s;cin>>s;
      if(s=="lu"){
	le=true;
	if(flag&&ri){cnt++;flag=false;}
      }else if(s=="ru"){
	ri=true;
	if(flag&&le){cnt++;flag=false;}
      }else if(s=="ld"){
	le=false;
	if((!flag)&&(!ri)){cnt++;flag=true;}
      }else{
	ri=false;
	if((!flag)&&(!le)){cnt++;flag=true;}
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}

