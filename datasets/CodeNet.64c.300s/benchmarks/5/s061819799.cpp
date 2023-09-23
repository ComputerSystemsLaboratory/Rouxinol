#include <iostream>

int main()
{
    int n_1st;
    int n_2nd;
    int n_3rd;
    int n;
    
    n_1st = n_2nd = n_3rd = 0;

    while (std::cin >> n){
        if (n > n_1st){
            n_3rd = n_2nd;
            n_2nd = n_1st;
            n_1st = n;
        }
        else if (n > n_2nd){
            n_3rd = n_2nd;
            n_2nd = n;
        }
        else if (n > n_3rd){
            n_3rd = n;
        }
    }
    
    std::cout << n_1st << std::endl;
    std::cout << n_2nd << std::endl;
    std::cout << n_3rd << std::endl;
    
    return 0;
}