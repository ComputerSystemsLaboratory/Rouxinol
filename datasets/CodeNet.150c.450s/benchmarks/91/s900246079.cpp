#include <iostream>
using namespace std;

int main(){
  int a,m[1000000],cou=1,j;
  m[1]=0;
  m[2]=1;
  for(int i=3;i<1000000;i++){
    if(i%2==0){
      m[i]=cou;
      continue;
    }
    for(j=3;j*j<=i;j+=2)if(i%j==0)break;
    if(j*j>i)cou++;
    m[i]=cou;
  }
  while(cin>>a){
    cout << m[a]<<endl;
  }
  
 
  return 0;
}
  