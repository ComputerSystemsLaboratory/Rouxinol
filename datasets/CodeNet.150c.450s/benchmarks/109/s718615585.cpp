#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
int main(void){
  int n;
  while(cin>>n,n){
    vector<int> ary(24*60*60,0);
    char b[9],e[9];
    while(n--){
      cin>>b>>e;
      int h,m,s;
      sscanf(b,"%d:%d:%d",&h,&m,&s);
      int start = ((h * 60) + m) * 60 + s; 
      sscanf(e,"%d:%d:%d",&h,&m,&s);
      int finish = ((h * 60) + m) * 60 + s; 
      for(int i = start ; i < finish ; i ++)ary[i]++;
    }
    int ret = -1;
    for(int i = 0 ; i < ary.size() ; i ++)ret = max(ret,ary[i]);
    cout<<ret<<endl;
  }
}