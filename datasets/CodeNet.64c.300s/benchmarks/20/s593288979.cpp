#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[])
{
    int d;
    while (cin >> d) {
        int area = 0;
        int cnt = 0;
        for (int i = 1; i < (600/d); i++) {
            area += d* (d*i) * (d*i);
            cnt++;
        }
        cout << area << endl;
    }
    
    return 0;
}