#include<iostream>
using namespace std;
#include<math.h>

#define MAX 1000000
int min(int a, int b);

int min(int a, int b) {
    if (a > b)
        return b;
    else
        return a;
}
int main()
{
    while (1)
    {
        int y, z, e, ans = MAX;
        cin >> e;
        if (!e)
            break;
        for (z=0; z*z*z <= e; z++) {
            y = (int)sqrt((double)e - z*z*z);
            ans = min(ans, e - y*y - z*z*z + y + z);
        }
        cout << ans << endl;
    }
    return 0;
}