#include <iostream>
int main(){
    int n,i,x;
    std::cin >> n;
    for(i=1;i<n+1;i++){
        if(i%3 == 0){
            std::cout <<" " << i ;
            continue;
        }
        x = i;
        while(x>0){
            if(x%10 == 3){
                std::cout <<" " << i ;
                break;
            } 
            x /=10;
        }
    }
    std::cout << std::endl;
    return 0;
}
