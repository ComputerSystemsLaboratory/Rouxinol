#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    int i,j;
    cin >> i >> j;
    int square, line;
    square = i * j;
    line = 2 * (i + j);
    cout << square << " " << line << endl;
    return 0;
}