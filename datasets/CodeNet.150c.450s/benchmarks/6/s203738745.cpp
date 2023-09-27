#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if ( a < b && b < c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
