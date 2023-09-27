#include <iostream>

using namespace std;

int main(){
  int n;
  int c[6]={500,100,50,10,5,1};
  while(cin>>n,n){
    int m=1000-n,a=0;
    for(int i=0;i<6;++i){
      a+=m/c[i];
      m-=m/c[i]*c[i];
    }
    cout<<a<<endl;
  }
  return 0;
}