#include<iostream>
#include<map>
using namespace std;
int main()
{
  int n,m;
  char c1,c2;
  map<char,char>convert;
  while(cin>>n,n){
    convert.clear();
    while(n-->0){
      cin>>c1>>c2;
      convert[c1]=c2;
    }
    cin>>m;
    while(m-->0){
      cin>>c1;
      if(convert.find(c1)!=convert.end())printf("%c",convert[c1]);
      else printf("%c",c1);
    }
    puts("");
  }
}