#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  string str;
  cin>>str;
  int n;
  cin>>n;

  string q,repstr;
  int a,b;
  for(int i=0;i<n;i++){
    cin>>q;
    if(q== "print"){
        cin>>a>>b;
        for(int pos=a;pos<=b;pos++) cout<<str[pos];
        cout<<endl;
    }else if(q=="reverse"){
        cin>>a>>b;
        string revstr="";
        for(int j=b;j>=a;j--) revstr+=str[j];
        str.replace(a,b-a+1,revstr);
    }else if(q=="replace"){
        cin>>a>>b>>repstr;
        str.replace(a,b-a+1,repstr);
    }
  }
  return 0;
}