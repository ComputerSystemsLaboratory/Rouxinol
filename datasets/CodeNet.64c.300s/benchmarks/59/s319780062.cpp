#include <iostream>
using namespace std;

int main(){
  
  int n,ans=0;
  cin>>n;
  while(n--){
    int a;
    cin>>a;
    int i=2;
    while(i*i<=a && a%i)i++;
    if(a%i||a==2)ans++; 
  }
  cout<<ans<<endl;
}