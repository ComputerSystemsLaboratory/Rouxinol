#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    if(a < b && b< c){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }
    return 0;
}
