#include<iostream>
 
using namespace std;
 
int main(){
  static bool cmp[1000000]={true};
  static int npr[1000000];
  for(int i=2;i<1000000;i++){
    if(!cmp[i]){
      for(int j=2;j*i<1000000;j++){
    cmp[i*j]=true;
      }
    }
    npr[i]=npr[i-1]+!cmp[i];
  }
  for(int n;cin>>n;n++){
    cout<<npr[n]<<endl;
  }
  return 0;
}