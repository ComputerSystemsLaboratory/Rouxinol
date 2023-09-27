#include<iostream>
#include<string>
using namespace std;

int main( ){
  string name,cp,sirei,p;
  int q,a,b,na;
  cin>>name>>q;
  na=(int)name.size();
  for(int i=0;i<q;i++){
    cin>>sirei;
    if(sirei=="print"){
      cin>>a>>b;
      cout<<name.substr(a,b-a+1)<<endl;
    }
    if(sirei=="reverse"){
      cin>>a>>b;
      cp=name.substr(a,b-a+1);
      na=cp.size();
      for(int i=0;i<na;i++)name[i+a]=cp[na-i-1];
    }
    if(sirei=="replace"){
      cin>>a>>b>>p;
      name=name.replace(a,b-a+1,p);
    }
  }
  return 0;
}