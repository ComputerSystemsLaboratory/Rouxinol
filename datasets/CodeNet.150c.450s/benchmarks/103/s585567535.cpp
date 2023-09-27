#include<iostream>
int n,s;
int count=0;

int method(int i,int j,int k){
  if(n==i){
    if(j==s){
      count++;
    }
    return 0;
  }
  if(k>9){
    return 0;
  }
  method(i+1,j+k,k+1);
  method(i,j,k+1);
  return 0;
}

int main(){

  while(std::cin >> n >> s){
    if(n==0&&s==0){
      break;
    }
    count =0;
    method(0,0,0);

    std::cout << count << std::endl;
  }
}