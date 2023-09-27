#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  int a,b;
  while(cin>>a>>b,a){
    int c[a],w=0;
    r(i,a)cin>>c[i];
    r(i,a-b){
      int cc=0;
      for(int j=i;j<i+b;j++)cc+=c[j];
      w=max(w,cc);
    }
    cout<<w<<endl;
  }
}