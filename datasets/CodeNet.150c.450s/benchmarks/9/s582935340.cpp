#include<iostream>
#include<string>
using namespace std;

int main()
{
  string s,left,right;
  int n,m;
  while(1){
    cin>>s;
    if(s=="-")break;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>m;
      left=s.substr(0,m);
      right=s.substr(m,s.length());
      s=right+left;
    }
    cout<<s<<endl;
  }
  return 0;
}