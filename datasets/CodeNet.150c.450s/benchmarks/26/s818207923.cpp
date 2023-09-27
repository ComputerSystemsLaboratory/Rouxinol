#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b;
    cin >> a >> b;
    if ( a < b) {
        cout << "a < b" << endl;
        return 0;
    } else if (a > b) {
        cout << "a > b" << endl;
        return 0;
    } else if (a == b) {
        cout << "a == b" << endl;
    }
}
