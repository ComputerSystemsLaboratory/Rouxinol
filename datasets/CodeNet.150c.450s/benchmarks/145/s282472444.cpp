#include<iostream>
#include<map>
using namespace std;
string a,b,s;
int A,B;
map<string,int>M;
int main(){
  while(cin>>s){
    if(A<s.size()) A=s.size(),a=s;
    if(B<++M[s])B=M[s],b=s;
  }
  cout<<b<<" "<<a<<endl;
}

