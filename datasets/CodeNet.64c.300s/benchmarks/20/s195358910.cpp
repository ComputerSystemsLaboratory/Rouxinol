#include <iostream>

#define SQUARE(x) ((x) * (x))

using namespace std;

int main()
{
    int d;
    int area;
    
    while (cin >> d){
        area = 0;
        
        for (int i = 0; i < 600; i += d){
            area += (d * SQUARE(i));
        }
        
        cout << area << std::endl;
    }
}