#include<iostream>

int main(){
  int n;
  int temp,max,a;

  while(1){
    std::cin >> n;
    if(n==0){
      break;
    }
    int a[n];
    for(int i=0;i<n;i++){
      std::cin >> a[i];
    }
    max = a[0];
    for(int i=0;i<n;i++){
      temp = a[i];
      if(max < temp){
        max = temp;
      }
      for(int j=i+1;j<n;j++){
        temp += a[j];
        if(max < temp){
          max = temp;
        }
      }
    }
    std::cout << max << std::endl;
  }
}