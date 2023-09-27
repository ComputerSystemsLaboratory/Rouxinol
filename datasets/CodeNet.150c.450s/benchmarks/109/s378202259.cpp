#include<queue>
#include<stack>
#include<math.h>
#include<cmath>
#include<bitset>
#include<stdio.h>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<utility>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int main(){
  int n;
  while(1){
    scanf("%d\n",&n);
    if(n==0){
      break;
    }
    int a,b,i;
    vector<int> x(216010);
    string s;
    for(i=0;i<n;i++){
      getline(cin,s);
      a=3600*((s[0]-'0')*10+(s[1]-'0'))+60*((s[3]-'0')*10+(s[4]-'0'))+((s[6]-'0')*10+(s[7]-'0'));
      b=3600*((s[9]-'0')*10+(s[10]-'0'))+60*((s[12]-'0')*10+(s[13]-'0'))+((s[15]-'0')*10+(s[16]-'0'));
      x[a]++,x[b]--;
    }
    for(i=0;i<=216005;i++){
      x[i+1]=x[i]+x[i+1];
    }
    int ans=0;
    for(i=0;i<=216005;i++){
      if(x[i]>ans){
        ans=x[i];
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}
