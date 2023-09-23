#include <iostream>

using namespace std;
int main(void) {

    int x;
    cin >> x;
    
    int h = x / 3600;
    int remaining = x % 3600;
    int m = remaining / 60;
    int s = remaining % 60;
    
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}

