#include <iostream>
#include <queue>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n,q,w,i;
  cin>>n;
  while(n--){
    string a,b;
    cin>>a;
    if(a[2]=='p'){
      int c=0;
      cin>>q>>w>>b;
      for(i=q;i<=w;i++)s[i]=b[c++];
    }
    else if(a[2]=='v'){
      int c=0;
      cin>>q>>w;
      for(i=q;i<=w;i++)b[c++]=s[i];
      for(c=0,i=w;i>=q;i--)s[i]=b[c++];
    }
    else{
      cin>>q>>w;
      for(i=q;i<=w;i++)cout<<s[i];
      cout<<endl;
    }
  }
}