#include <iostream>

int main(){
    int num;
    int cnt=1;
    while(1){
       std::cin >>num;
       if(num==0) break;     
       std::cout <<"Case "<< cnt << ": " << num << std::endl; ;
        cnt++;

    }
    return 0;
}