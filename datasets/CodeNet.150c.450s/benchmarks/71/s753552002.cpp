//52
#include<iostream>
 
using namespace std;
 
int main(){
  for(int n;cin>>n;){
    int ans=0;
    for(int a=0;a<=9;a++){
      for(int b=0;b<=9;b++){
    for(int c=0;c<=9;c++){
      for(int d=0;d<=9;d++){
        ans+=a+b+c+d==n;
      }
    }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
