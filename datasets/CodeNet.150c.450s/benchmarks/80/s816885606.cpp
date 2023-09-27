#include <iostream>

int main ()
{
    int a_info, a_math, a_sci, a_eng;
    int b_info, b_math, b_sci, b_eng;

    std::cin >> a_info;
    std::cin >> a_math;
    std::cin >> a_sci;
    std::cin >> a_eng;
    std::cin >> b_info;
    std::cin >> b_math;
    std::cin >> b_sci;
    std::cin >> b_eng;

    int a_S,b_S;

    a_S = a_info + a_math + a_sci + a_eng;
    b_S = b_info + b_math + b_sci + b_eng;


    if (a_S >= b_S) {
        std::cout << a_S << std::endl;
    } else {
        std::cout << b_S << std::endl;
    }

    return 0;
}