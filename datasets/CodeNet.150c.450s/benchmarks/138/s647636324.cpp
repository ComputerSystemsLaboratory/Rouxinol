#include<iostream>
using namespace std;
int gcd(int a,int b){
    do{
        int c=a%b;
        a=b;
        b=c;
    }while(b);
    return a;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b)<<endl;
  return 0;
}