#include <bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <math.h>
#include<list>
#include<algorithm>
using namespace std;

int main(){
  list<int> L;

  string s;
  int n,data;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s[0]=='i'){
      cin>>data;
      L.push_front(data);
    }else if(s[6]=='F'){
      L.pop_front();
    }else if(s[6]=='L'){
      L.pop_back();
    }else{
      cin>>data;
      for(list<int>::iterator it=L.begin();it!=L.end();it++){
        if(*it==data){ L.erase(it); break;}
      }
    }
  }
  for(list<int>::iterator it=L.begin();it!=L.end();it++){
    if(it!=L.begin()) cout<<" ";
    cout<<*it;
  }
  cout<<endl;
  return 0;
}

