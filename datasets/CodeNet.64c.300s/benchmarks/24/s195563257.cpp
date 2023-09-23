#include <iostream>

int main(){
    int n,p1=0,p2=0;
    std::cin >> n;
    while( n != 0){
        for(int i=0;i<n;i++){
            int a ,b;
            std::cin >> a >> b;
            if(a > b){
                p1 += a+b;
            }
            if(b > a){
                p2 += a+b;
            }
            if(a==b){
                p1 += a;
                p2 += b;
            }
        }
        std::cout << p1 << ' ' << p2 << std::endl;
        std::cin >> n;
        p1 = 0;p2=0;
    }
}