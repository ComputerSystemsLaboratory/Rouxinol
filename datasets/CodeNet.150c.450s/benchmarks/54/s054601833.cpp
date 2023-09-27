#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
    // input
    string W;
    cin >> W;

    string str;
    int num = 0;
    while ( cin >> str ) {
        std::transform( str.begin(), str.end(), str.begin(), ::tolower );
        if (W == str) {
            num += 1;
        }
    }
    
    // think
    
    // output
    cout << num << endl;
}
