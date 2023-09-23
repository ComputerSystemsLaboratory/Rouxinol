#include<iostream>
int main(){
  while(1){
    int n,x,count=0;
    std::cin >> n >> x;
    if(n == 0 && x == 0) break;
    for(int i=1; i<=n-2; i++){
      for(int j=i+1; j<=n-1;j++){
        for(int k=j+1; k<=n; k++){
          if(i+j+k == x){
            count++;
          }
        }
      }
    }
    std::cout << count << "\n";
  }
  return 0;
}