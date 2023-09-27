#include<iostream>
#include<string>
using namespace std;
int main(){
 string s;
 int i,l;
 cin>>s;
 l=s.size();
 for (i=l-1;i>=0;i--)
  cout<<s[i];
 cout<<endl;
return 0;
}