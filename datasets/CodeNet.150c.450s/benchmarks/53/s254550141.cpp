#include<iostream>
#include<math.h>
using namespace std;int main(){int n;cin>>n;cout<<n<<":";for(int i=2;i<sqrt(n)+1;i++){while(1){if(n%i!=0)break;n/=i;cout<<" "<<i;}}if(n!=1)cout<<" "<<n;cout<<endl;return 0;}
