#include<iostream>

int main(){
        int n,debt = 100000;
        std::cin >> n;
        for(int i=0;i<n;i++){
                debt = debt * 1.05;
                int mod = debt % 1000;
                if(mod != 0) debt = debt - mod + 1000;
        }
        std::cout << debt << std::endl;
        return 0;
}