#include <iostream>

/* ユークリッドの互除法 */
int _euclidean_algorithm(int a, int b)
{
    if (a % b == 0){
        return b;
    }
    return _euclidean_algorithm(b, a % b);
}

/* Greatest common divisor */
int gcd(int a, int b)
{
    return _euclidean_algorithm(a, b);
}

/* Least common multiple */
int lcm(int a, int b)
{
    return (a / gcd(a, b) * b);
}

int main(void)
{
    int a, b;
    
    while (std::cin >> a >> b){
        std::cout << gcd(a, b) << " " << lcm(a, b) << std::endl;
    }
    
    return 0;
}