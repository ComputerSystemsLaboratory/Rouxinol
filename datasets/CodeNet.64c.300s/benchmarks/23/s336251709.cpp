#include<iostream>
using namespace std;
class Rectangle{
public:
  void cal(int a,int b){
    cout<<a*b<<" "<<2*a+2*b<<endl;
  }
};
int main(){
  int a,b;
  cin>>a>>b;
  Rectangle rec;
  rec.cal(a,b);
  return 0;
}