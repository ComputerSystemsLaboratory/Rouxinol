#include <iostream>
using namespace std;

int main() {
    const int max = 600;
    int d;
    while(cin >> d)
    {
        int s = 0;
        int times = max / d;
        for(int i = 1; i < times; i++)
        {
            s += i*i;
        }
        s *= d*d*d;
        cout << s << endl;
    }
    
    return 0;
}