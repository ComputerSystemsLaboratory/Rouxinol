#include <iostream>
#include <string>
using namespace std;
int main(){
  string kagi[256];
  string pass[256];
  int n,i,N,a=0,I,b=0;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>kagi[i];
  }
 
  cin>>N;
  for(i=0;i<N;i++){
    cin>>pass[i];
  }
  for(I=0;I<N;I++){
    for(i=0;i<n;i++){
      if(kagi[i]==pass[I]) {
	a++;
	break;
      }
      else b++;
    } 
    if(b==n) cout<<"Unknown "<<pass[I]<<endl;
    else if(a%2==0) cout<<"Closed by "<<pass[I]<<endl;
    else if(a%2!=0) cout<<"Opened by "<<pass[I]<<endl;
    b=0;
      
  }

  return 0;
}