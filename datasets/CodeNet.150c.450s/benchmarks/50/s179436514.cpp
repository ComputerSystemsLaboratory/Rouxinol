#include<iostream>
using namespace std;
 
int main(){
   
  int n;

  while(cin>>n, n){
    int cnt=0;
    
    n=1000-n;
    cnt+=n/500;
    n%=500;
    cnt+=n/100;
    n%=100;
    cnt+=n/50;
    n%=50;
    cnt+=n/10;
    n%=10;
    cnt+=n/5;
    n%=5;
    
    cout<<cnt+n<<endl;
  }
   
  return 0;
}