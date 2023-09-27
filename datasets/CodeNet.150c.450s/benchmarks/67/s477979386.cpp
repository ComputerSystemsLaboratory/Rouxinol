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
  int num[1010]={};
  for(int i=1;i<=1001;i++){
    num[i]=num[i-1]+i;
  }
  int n;
  while(cin>>n,n){
    int ans=0;
    for(int i=0;i<=1000;i++){
      for(int j=i+2;j<=1000;j++){
	if(num[j]-num[i]==n){ans++;}
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

