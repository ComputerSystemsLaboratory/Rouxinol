#include <iostream>

using namespace std;

int fx(int x){
    return x*x;
};

int main() {
    int d;
    while( cin >> d)
    {
        int l = d;
        int s = 0;
        while(l <= 600 - d)
        {
            s += fx(l) * d;
            l += d;
        }
        cout << s <<endl;
    }
    return 0;
}