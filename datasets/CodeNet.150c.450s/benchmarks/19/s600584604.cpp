#include <iostream>

int main(){

int x,y;
 while(1){
 std::cin>>x>>y;
 if(x==0 && y==0){break;}
 else if(x<=y){std::cout << x << " " << y << std::endl;}
 else {std::cout << y << " " << x << std::endl;}
 }
return 0;
}