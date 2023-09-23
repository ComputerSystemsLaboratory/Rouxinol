#include<iostream>
using namespace std;

int main()
{
  int n,x;
  cin>>n;
  for(int i=1;i<n+1;i++){
    if(i%3==0)cout<<" "<<i;
    else if(i%10==3)cout<<" "<<i;
    else{
      for(x=i;x!=0;x/=10){
	if(x%10==3){
	  cout<<" "<<i;
	  break;
	}
      }
    }
  }
  cout<<endl;
  return 0;
}