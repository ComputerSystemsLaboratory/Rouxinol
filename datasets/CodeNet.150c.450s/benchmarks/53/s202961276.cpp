#include<iostream>
using namespace std;

int judge(long long n)
{
  if(n<2)return 0;
  else if(n==2)return 1;
  if(n%2==0)return 0;
  for(int i=3;i<=n/i;i+=2){
    if(n%i==0)return 0;
  }
  return 1;
}

int main()
{
  long long n;

  cin>>n;
  cout<<n<<":";
  if(judge(n))cout<<" "<<n;
  else{
    for(int i=2;i<=n;i++){
      if(n%i==0){
	cout<<" "<<i;
	n/=i;
	i--;
      }
    }
  }
  cout<<endl;
  return 0;
}