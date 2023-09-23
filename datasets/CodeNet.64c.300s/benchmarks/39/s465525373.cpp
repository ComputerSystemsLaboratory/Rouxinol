#include <iostream>

int main(void)
{
    int n;

    while(std::cin >> n)
    {
        int result = 0;
        
        for(int a = 0; a < 10; ++a)
        {
            for(int b = 0; b < 10; ++b)
            {
                for(int c = 0; c < 10; ++c)
                {
                    for(int d = 0; d < 10; ++d)
                    {
                        result += (a + b + c + d == n);
                    }
                }
            }
        }
        
        std::cout << result << std::endl;
    }

    return 0;
}