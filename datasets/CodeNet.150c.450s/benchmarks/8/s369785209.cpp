#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string tWord, hWord;
    int n, tPoint = 0, hPoint = 0, i;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> tWord >> hWord;
        if (tWord > hWord)
            tPoint += 3;
        else if (hWord > tWord)
            hPoint += 3;
        else
        {
            tPoint++;
            hPoint++;
        }
    }

    printf("%d %d\n", tPoint, hPoint);
}
