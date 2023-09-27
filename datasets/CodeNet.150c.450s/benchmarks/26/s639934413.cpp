#include <iostream>

using namespace std;
int main(void) {

    int x, y;
    cin >> x >> y;
    
    string s = "";
    
    if (x == y)
    {
        s = " == ";
    } else if (x > y) {
        s = " > ";
    } else {
        s = " < ";
    }
    
    cout << "a" << s << "b" << endl;

    return 0;
}

