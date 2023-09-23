#include <iostream>

int main(){
        int n;
        while(std::cin >> n){
                int result=100000;
                while(n--){
                        result*=1.05;
                        if(result%1000!=0)result+=1000-result%1000;
                }

                std::cout << result << std::endl;
        }

        return 0;
}