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
#include<map>
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
    int ma=0;
    int time_table[30][65][65]={};
    for(int i=0;i<n;i++){
      int a,b,c;
      scanf("%d:%d:%d",&a,&b,&c);
      time_table[a][b][c]++;
      scanf("%d:%d:%d",&a,&b,&c);
      time_table[a][b][c]--;
    }
    int cnt=0;
    for(int i=0;i<=24;i++){
      for(int j=0;j<=60;j++){
	for(int k=0;k<=60;k++){
	  cnt+=time_table[i][j][k];
	  ma=max(ma,cnt);
	}
      }
    }
    cout<<ma<<endl;
  }
  return 0;
}

