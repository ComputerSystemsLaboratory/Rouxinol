#include<iostream>

int main(){
  int a[4];
  int b[4];
  int i,j,hit,blow;

  while(std::cin >> a[0]){
    std::cin >> a[1] >> a[2] >> a[3]
             >> b[0] >> b[1] >> b[2] >> b[3];
    hit = 0;
    blow = 0;
    for(i=0;i<4;i++){
      if(a[i]==b[i]){
        ++hit;
      }
      for(j=0;j<4;j++){
        if(i!=j){
          if(a[i]==b[j]){
            ++blow;
          }
        }
      }
    }
    std::cout << hit << ' ' << blow << std::endl;
  }
}