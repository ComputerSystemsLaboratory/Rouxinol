#include <iostream>
using namespace std;

int main(){
  int n;
  while(cin>>n){
    if(n==0)break;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
      int c,d;
      cin>>c>>d;
      if(c>d){
        a+=(c+d);
      }else if(c<d){
        b+=(c+d);
      }else{
        a+=c;
        b+=d;
      }
    }
    cout<<a<<" "<<b<<endl;
  }
  return 0;
}