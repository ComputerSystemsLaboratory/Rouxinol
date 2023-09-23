#include <iostream>

using namespace std;

int main(){
 int n=0;
 int count=0;
 while(true){
  cin>>n;
  if(n==0){
   break;
  }else{
   for(int i=1;i<n;i++){
    for(int j=i+1;j<n;j++){
     if((j-i+1)*(i+j)/2==n){
      count++;
     }
    }
   }
  }
  cout<<count<<endl;
  count=0;
 }
}