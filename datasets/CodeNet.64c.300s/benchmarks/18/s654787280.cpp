#include <iostream>

using namespace std;

int main() {
    int n[31];
    n[0] = 0;
    n[1] = 1;
    n[2] = 2;
    n[3] = 4;
    for(int i = 4; i < 31; i++)
    {
        n[i] = n[i-1] + n[i-2] + n[i-3];
    }
    int d;
    while(cin >> d && d != 0)
    {
        cout << n[d] / (365 * 10) + 1 << endl;
    }
    
    return 0;
}