#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
 string w,t;
 int res=0;

 cin>>w;
 transform(w.begin(),w.end(),w.begin(),::toupper);
 while(true){
  cin>>t;
  if(t=="END_OF_TEXT") break;
  transform(t.begin(),t.end(),t.begin(),::toupper);
  if(t==w) res++;
 }
 cout<<res<<endl;
 return 0;
}