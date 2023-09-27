#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define REPR(i,n) for(int i=n-1;i>=0;i--)
#define INF 2000000000
#define llong long long
using namespace std;
int main(){
  int n;
  char str[10],com[13];
  map<string,bool> T;
  scanf("%d",&n);
  REP(i,n){
    scanf("%s %s",com,str);
    if(com[0]=='i') T[string(str)]=true;
    else {
      if(T[string(str)]) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}