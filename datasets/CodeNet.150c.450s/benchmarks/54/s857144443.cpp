#include<iostream>
#include<cctype>
#include<string>
using namespace std;

string toUpper( string s ){
  string t=s;
  for(int j=0;j<t.size();j++){
    t[j]=toupper(t[j]);
  }
  return t;
}

int main( ){
  string w,a;
  int i=0;
  cin>>w;
  w=toUpper(w);
  while(1){
    cin>>a;
    if(a=="END_OF_TEXT")break;
    a=toUpper(a);
    if(a==w)i++;
  }
  cout<<i<<endl;
  return 0;
}