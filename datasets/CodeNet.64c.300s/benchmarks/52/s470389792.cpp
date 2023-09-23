#include<iostream>
int count=0;

int method(int n,int s,int k){
  if(n==0){
    if(s==0){
      count++;
    }
    return 0;
  }
  if(n<0||s<0){
    return 0;
  }
  if(k>9){
    return 0;
  }
  method(n-1,s-k,k+1);
  method(n,s,k+1);
  return 0;
}

int main(){
  int n,s;
  while(std::cin >> n >> s){
    if(n==0&&s==0){
      break;
    }
    count =0;
    method(n,s,0);

    std::cout << count << std::endl;
  }
}