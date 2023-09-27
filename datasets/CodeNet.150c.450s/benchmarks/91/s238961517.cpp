#include <iostream>
#include <vector>
#include <algorithm>

int count_prime( unsigned int const& n )
{
    if ( n <= 0 || 1000000 <= n ) return -1;
    std::vector<bool> memo_prime( n+1, true );
    memo_prime.at(0) = memo_prime.at(1) = false;
    for ( unsigned int i = 2; i < n; ++i )
    {
        for ( unsigned int j = 2; i*j <= n; ++j )
        {
            memo_prime.at(i*j) = false;
        }
    }
    return std::count( memo_prime.begin(), memo_prime.end(), true );
}

int main()
{
    int n;
    while( std::cin >> n )
    {
        std::cout << count_prime(n) << std::endl;
    }
    return 0;
}