#include <iostream>
using namespace std;

int main(){
  long long n,q,s[10001],t,k;
  cin>>n;
  for(long long i=0;i<n;i++){
    cin>>s[i];
  }
  cin>>q;
  k=0;
  for(long long i=0;i<q;i++){
    cin>>t;
    for(long long j=0;j<n;j++){
      if(s[j]==t){
	k++;
	break;
      }
    }
  }
  cout<<k<<endl;
  return 0;
}