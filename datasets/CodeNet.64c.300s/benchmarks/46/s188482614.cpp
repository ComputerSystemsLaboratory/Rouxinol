#include <iostream>
using namespace std;

int main(){
  long long a,d,c;
  bool prime[1000005];
  for(int i=2;i<1000005;i++)prime[i]=true;
  
  for(int i=2;i<1000005;i++){
    for(int j=1;i*j<1000005;j++){
      if(i!=i*j&&i*j<1000005)prime[i*j]=false;
    }
  }
  
  while(1){
    cin>>a>>d>>c;
    if(a==0&&d==0&&c==0)break;
    int cnt=0;
    for(int i=0;;i++){
      //cout<<a+d*i<<endl;
      if(prime[a+d*i])cnt++;
      if(cnt==c){
	cout<<a+d*i<<endl;
	break;
      }
    }
  }
  return 0;
}