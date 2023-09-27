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
  int a,d,n;
  while(cin>>a>>d>>n,a+d+n){
    int cnt=0;
    while(cnt!=n){
      if(a==1){a+=d;continue;}
      if(a==2){cnt++;a+=d;continue;}
      bool flag=true;
      for(int i=2;i<=sqrt(a);i++)
	if(a%i==0){
	  flag=false;
	  break;
	}
      if(flag)cnt++;
      a+=d;
    }
    cout<<a-d<<endl;
  }
  return 0;
}