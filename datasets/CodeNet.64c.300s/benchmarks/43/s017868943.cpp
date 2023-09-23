#include <iostream>
using namespace std;

int main()
{
    int s[2], u;
    for(int k = 0; k < 2; k++) {
        s[k] = 0;
        for(int i = 0; i < 4; i++) {
            cin >> u;
            s[k] += u;
        }
    }

    cout << max(s[0], s[1]) << endl;
        
        
}