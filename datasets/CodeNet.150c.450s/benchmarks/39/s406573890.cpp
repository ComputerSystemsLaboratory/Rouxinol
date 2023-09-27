//----------------------------------------------------------------------
// ITP1_1_C:   Rectangle
//----------------------------------------------------------------------

//----------------------------------------------------------------------
// Includes
//----------------------------------------------------------------------
#include <iostream>

//----------------------------------------------------------------------
// Definitions
//----------------------------------------------------------------------
class Rectangle
{
public:
    Rectangle( size_t height, size_t width )
        : m_height( height )
        , m_width( width )
    {}

    size_t getArea()
    {
        return m_height * m_width;
    }

    size_t getCircumference()
    {
        return m_height * 2 + m_width * 2;
    }

private:
    size_t m_height;
    size_t m_width;
};

//----------------------------------------------------------------------
// Entry point
//----------------------------------------------------------------------
int main()
{
    size_t a = 0, b = 0;

    std::cin >> a >> b;

    Rectangle rect( a, b );

    std::cout << rect.getArea() << ' ' << rect.getCircumference() << std::endl;

    return 0;
}