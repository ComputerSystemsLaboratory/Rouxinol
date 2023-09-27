#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[4], b[4];
    int sa, sb;

    sa = sb = 0;
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    for (int i = 0; i < 4; i++)
        cin >> b[i];
    
    for (int i = 0; i < 4; i++) {
        sa += a[i];
        sb += b[i];
    }
    cout << max(sa, sb) << endl;

    return 0;
}