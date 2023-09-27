#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    bool f[31] = {0};
    for(int i=0; i<28; i++) {
        int a;
        cin >> a;
        f[a] = true;
    }
    for(int i=1; i<=30; i++) {
        if(f[i] == false)
            cout << i << endl;
    }

    return 0;
}