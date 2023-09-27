#include <iostream>

using namespace std;

int main(void) {
    int isec, h, m, osec;
    
    cin >> isec;
    h = isec / 60 / 60;
    m = (isec / 60) - (h * 60);
    osec = isec - (h * 60 * 60) - (m * 60);
    cout << h << ":" << m << ":" << osec << "\n";
    
    return 0;
}