#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    string s,ss;
    cin>>s>>ss;
    int a[ss.size()+2][s.size()+2];
    r(i,0,ss.size()+2)r(j,0,s.size()+2)a[i][j]=0;
    ss=' '+ss;
    s=' '+s;
    r(i,1,ss.size()+1){
      r(j,1,s.size()+1){
        if(ss[i]==s[j])a[i][j]=a[i-1][j-1]+1;
        else a[i][j]=max(a[i-1][j],a[i][j-1]);
      }
    }
    cout<<a[ss.size()-1][s.size()-1]<<endl;
  }
}