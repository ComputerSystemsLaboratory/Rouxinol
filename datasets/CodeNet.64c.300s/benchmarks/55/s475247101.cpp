#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int x = 0;
    int i = 1;
    
    while (cin >> x, x) {
        cout << "Case " << i << ": " << x << endl;
        i++;
    }
    
    return 0;
}