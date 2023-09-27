#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  int n,m;
  string s;
  while(cin>>n,n){
    char a[n][3],d;
    r(i,n){cin>>a[i][0]>>a[i][1];}
    cin>>m;
    char s[m];
    r(i,m)cin>>s[i];
    r(i,m){r(j,n)if(s[i]==a[j][0]){s[i]=a[j][1];break;}}
    r(i,m)cout<<s[i];
    cout<<endl;
  }
}