#include <iostream>
using namespace std;
int main(){
  int n,s,j,k;
  int a[11][46];
  for(int s=0;s<46;s++)
    for(int n=0;n<11;n++)
      a[n][s]=0;
  n=s=0;
  for(int i=0;i<1024;i++){
    for(j=i,n=0;j>0;j/=2)
      n += j%2;
    for(j=i,s=0,k=0;j>0;j/=2,k++)
      s += j%2*k;
    a[n][s]++;
  }
  while(true){
    cin>>n>>s;
    if(!n&&!s)
      break;
    if(s<46)
      cout<<a[n][s]<<endl;
    else
      cout<<0<<endl;
  }
  return 0;
}
//  for(cin>>n>>s;n||s;cout<<a[n][s]<<endl,cin>>n>>s);