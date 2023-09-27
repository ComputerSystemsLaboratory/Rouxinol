#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (max(a, b) < c && min(b, c) > a)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
