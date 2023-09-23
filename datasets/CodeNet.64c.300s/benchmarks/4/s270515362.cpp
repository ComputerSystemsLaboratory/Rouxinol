#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  string res;
  cin>>a>>b>>c;
  if(a<b&b<c)res="Yes";else res="No";
  cout<<res<<endl;
  return 0;
}
