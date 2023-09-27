#include <iostream>
#include <queue>
#include <cctype>
#include <stdio.h>
#include <map>

using namespace std;


int main(int argc, char const* argv[])
{
    int a=0;
    int b=0;
    int tmp;
    for (int i = 0; i < 4; i++) 
    {
        cin >> tmp;
        a += tmp;
    }
    for (int i = 0; i < 4; i++) 
    {
        cin >> tmp;
        b += tmp;
    }
    cout << max( a, b) << endl;
    return 0;
}