#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include<list>
#include <vector>
#include <stack>
#include<string>
using namespace std;

int main(){
  stack<int> S1;
  stack<pair<int, int> > S2;
  int sum=0,l,a=0;;
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='\\') S1.push(i);
    else if(s[i]=='/'&& !S1.empty()){
      l=S1.top();
      S1.pop();
      sum+= i-l;
      a=i-l;
      while(!S2.empty()&&l<S2.top().first){
        a+=S2.top().second;
        S2.pop();
      }
      S2.push(make_pair(l,a));
    }
  }
  if(S2.empty()) cout<<"0\n"<<"0\n";
else{
    vector<int> x;
    while(!S2.empty()){x.push_back(S2.top().second); S2.pop();}
    reverse(x.begin(),x.end());
    cout<<sum<<"\n";
    cout<<x.size()<<" ";
    for(int i=0;i<x.size()-1;i++) cout<<x[i]<<" ";
    cout<<x[x.size()-1]<<"\n";}
    return 0;

}



