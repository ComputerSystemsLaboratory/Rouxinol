#include<iostream>

int main(){
    int num,i,j;
    for(i=0;i<10000;i++){
        std::cin >> num;
        if(num==0) break;
        std::cout << "Case "<< i+1<< ": "<< num<< std::endl;
    }
    return 0;
}