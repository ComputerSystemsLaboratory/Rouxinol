//----------------------------------------------------------------------
// ITP1_1_B:   X Cubic
//----------------------------------------------------------------------

//----------------------------------------------------------------------
// Includes
//----------------------------------------------------------------------
#include <iostream>

//----------------------------------------------------------------------
// Definitions
//----------------------------------------------------------------------

//----------------------------------------------------------------------
// Entry point
//----------------------------------------------------------------------
int main()
{
    size_t result = 1, num = 0;

    std::cin >> num;

    for( size_t calcCnt = 0; calcCnt < 3; ++calcCnt )
    {
        result *= num;
    }

    std::cout << result << std::endl;

    return 0;
}