#include <iostream>
using namespace std;
int main (int argc, const char * argv[])
{

    int a, b, c , i;
    cin >> a >> b >> c;
    if (a>b ) {
        i = a;
        a = b;
        b = i;
    }
    if (b>c) {
        i = b;
        b = c;
        c = i;
    }
    if (a>b ) {
        i = a;
        a = b;
        b = i;
    }
  
    cout << a << " " << b << " " << c << endl;
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}