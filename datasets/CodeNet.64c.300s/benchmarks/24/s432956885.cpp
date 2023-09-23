#include<iostream>
using namespace std;

int main(){
  int ans1=0,ans2=0,num1,num2,n;

  while(1){
    ans1=ans2=0;
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin>>num1>>num2;
      if(num1>num2)ans1=ans1+num1+num2;
      else if(num1<num2)ans2=ans2+num1+num2;
      else {
	ans1=ans1+num1;
	ans2=ans2+num1;
      }
    }
    cout<<ans1<<" "<<ans2<<endl;
  }
 
 return 0;
}