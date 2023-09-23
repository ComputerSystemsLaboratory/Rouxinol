#include<iostream>
#include<math.h>

using namespace std;

int isPrimeNumbers(int x){
  if(x==1){
    return 0;
  }else if(x==2){
    return 1;
  }else if((x%2)==0){
    return 0;
  }else{
    int y=pow(x,(1.0/2.0));
    for(int p=3;p<=y;p++){
      if(x%p==0)return 0;
    }
  }
  return 1;
}

int main(){
  int n;
  cin>>n;
  int x[n];
  for(int i=0;i<n;i++){
    cin>>x[i];
  }
  int count=0;
  for(int i=0;i<n;i++){
    if(isPrimeNumbers(x[i])==1){
      count++;
      //cout<<isPrimeNumbers(x[i])<<endl<<x[i]<<endl;
    }else{
      continue;
    }
  }
  cout<<count<<endl;
  return 0;
  //std::cout << pow(9,(1.0/2.0))<< '\n';
}

