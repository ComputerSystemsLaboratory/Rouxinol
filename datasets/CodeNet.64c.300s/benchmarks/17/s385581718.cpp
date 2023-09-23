#include <iostream>
#include <map>

using namespace std;

int addTx(int p, int x)
{
    float v = p;
    v *= (100 + x);
    v /= 100;
    return (int)v;
}

int main(void)
{
    int a, b, t;
    while(cin >> a >> b >> t){
        if(a == 0 && b == 0 && t == 0)
            return 0;

        int max = 0;

        for(int x = 1; x <= t; ++x)
            for(int y = 1; y <= (t - x); ++y){
                // cout << addTx(x, a) + addTx(y, a) << endl;
                if(addTx(x, a) + addTx(y, a) == t){
                    int s = addTx(x, b) + addTx(y, b);
                    if(max < s)
                        max = s;
                }
            }

        cout << max << endl;
    }
}