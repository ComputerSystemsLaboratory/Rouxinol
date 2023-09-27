#include <iostream>

int count_pattern( unsigned int const& n )
{
    int ans=0;
    for ( unsigned int a = 0; a < 10; ++a )
    {
        for ( unsigned int b = 0; b < 10; ++b )
        {
            for ( unsigned int c = 0; c < 10; ++c )
            {
                for ( unsigned int d = 0; d < 10; ++d)
                {
                    if ( a+b+c+d == n ) ++ans;
                }
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    while (std::cin >> n)
    {
        std::cout << count_pattern(n) << std::endl;
    }
    return 0;
}