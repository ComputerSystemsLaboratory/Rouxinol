#include<iostream>
using namespace std;
int main(){
  long long  a,b;
  while(cin>>a>>b){
    //Eucledean algorithm                                                                                                     
    long long c,d,r,GCD,LCM;
    c=a;d=b;
    do{
      r=c%d;
      c=d;d=r;
    }while(r);
    GCD=c;
    LCM=a*b/GCD;
    cout << GCD << ' ' << LCM <<endl;
  }
  return 0;
}