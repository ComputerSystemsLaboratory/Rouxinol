#include<iostream>
using namespace std;
class SLE{
public:
  void comp(int a,int b){
    if(a==b)cout<<"a == b"<<endl;
    else if(a<b)cout<<"a < b"<<endl;
    else cout<<"a > b"<<endl;
  }
};
int main(){
  int a,b;
  cin>>a>>b;
  SLE sle;
  sle.comp(a,b);
  return 0;
}