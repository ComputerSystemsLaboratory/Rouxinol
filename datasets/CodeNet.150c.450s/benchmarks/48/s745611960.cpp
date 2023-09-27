#include<iostream>
#include<cmath>
using namespace std;

int min(int a, int b) {
    if (a > b)return b;
    else return a;
}

int main()
{
    while (1) {
        int ans, E, x;
        cin >> E;
        if (E == 0)break;
        ans = 1000000;
        for (int i = 0; i*i*i <= E; i++) {
            int z = i;
            int y = sqrt(E - z*z*z);
            x = E - z*z*z - y*y;
            ans = min(ans, x + y + z);
        }
        cout << ans << endl;
    }
    return 0;
}