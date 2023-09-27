#include <iostream>

int main(int argc, char const *argv[]) {
  int n=0,x=0;
  while(1){
    int count=0;
    std::cin >> n >> x;
    if(n == 0 && x == 0)break;
    int sum=0;
    for(int i=1;i<=n-2;i++){
      for(int j=i+1;j<=n-1;j++){
        for(int k=j+1;k<=n;k++){
          sum = i+j+k;
          if(sum == x)count++;
          else if ((i + j + k) > x) break;
        }
      }
    }
    std::cout << count << std::endl;
  }
  return 0;
}