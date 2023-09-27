#include<iostream>
using namespace std;

int main()
{
  long long n,min,max,sum=0;
  long long N[10001];
  cin>>n;
  cin>>N[0];
  max=min=sum=N[0];
  for(int i=1;i<n;i++){
    cin>>N[i];
    if(max<N[i])max=N[i];
    if(min>N[i])min=N[i];
    sum+=N[i];
  }
  cout<<min<<" "<<max<<" "<<sum<<endl;
  return 0;
}
  