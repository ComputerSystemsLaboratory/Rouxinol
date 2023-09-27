#include <iostream>
#include <sstream>
#include <cstdio>
#include<stack>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string s;
  cin>>s;
  stack<int> p1,p2,s3;
  int i=1,tmp=0,sum=0,tmps,cnt=0;
  for(;i<s.length()+1;i++){
    if(s[i-1]=='\\')p1.push(i);
    else if(s[i-1]=='/'&&!p1.empty()){
      tmp=p1.top();
      p1.pop();
      p2.push(i-tmp);
      s3.push(tmp);
    }
  }
  while(!p1.empty())p1.pop();
  while(!p2.empty()){
    tmp=s3.top();
    tmps=p2.top();
    s3.pop();
    p2.pop();
    if(!p2.empty()&&tmp<=s3.top()){
      tmps+=p2.top();
      p2.pop();
      p2.push(tmps);
      s3.pop();
      s3.push(tmp);
    }
    else {
      p1.push(tmps);
      sum+=tmps;
      cnt++;
    }
  }
  cout<<sum<<endl;
  cout<<cnt;
  while(!p1.empty()){
    cout<<" ";
    tmp=p1.top();
    p1.pop();
    cout<<tmp;
    if(p1.empty())break;

  }
  cout<<endl;
  return 0;
}

