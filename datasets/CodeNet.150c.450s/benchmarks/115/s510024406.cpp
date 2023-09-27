#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
#define CLR(a)     memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)    cerr << #x << " = " << (x) << endl;//debug
#define debug(x)   cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define EPS        1e-10//sample:if((double)>=(double)+EPS)
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);

using namespace std;
int c[10000][10000]={};
int lcs(string s1,string s2){
  int m=s1.length(),n=s2.length(),maxl=0;
  s1=' '+s1;s2=' '+s2;
  rep(i,1000)rep(j,1000)c[i][j]=0;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(s1[i]==s2[j])c[i][j]=c[i-1][j-1]+1;
      else c[i][j]=max(c[i-1][j],c[i][j-1]);
      maxl=max(maxl,c[i][j]);
    }
  }
  return maxl;
}
int main(){
  string str1,str2;
  int n;
  cin>>n;
  rep(i,n){
    cin>>str1>>str2;
    cout<<lcs(str1,str2)<<endl;
  }
  return 0;
}
