#include<iostream>
#include<algorithm>
using namespace std;
int D=365;
int K=26;
int main()
{
  int d,cc=0,m=0,i,j,res=0;
  int c[K],s[D][K],t[D],l[K];
  cin >> d;
  for(i=0;i<K;i++){
    cin >> c[i];
    cc+=c[i];
  }
  for(i=0;i<d;i++)
    for(j=0;j<K;j++)
      cin >> s[i][j];
  for(i=0;i<d;i++){
    cin >> t[i];
    t[i]--;
  }
  fill(l,l+K,-1);
  for(i=0;i<d;i++){
    m+=cc;
    m-=c[t[i]]*(i-l[t[i]]);
    l[t[i]]=i;
    res+=s[i][t[i]]-m;
    cout << res << endl;
  }
  return 0;
}