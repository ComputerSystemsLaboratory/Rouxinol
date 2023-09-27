#include<iostream>
using namespace std;
int main(){
  int n,a,an;
  cin>>n;
  an=n;
  while(n--){
    cin>>a;
    if(a==1)an--;
    for(int i=2;i*i<=a;i++)
      if(a%i==0){
	an--;
	break;      
      }
  }
  cout<<an<<endl;
  return 0;
}