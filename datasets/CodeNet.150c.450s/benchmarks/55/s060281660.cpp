#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    while (1)
    {
        int i, ans = 0;
        cin >> num;
        if (num == "0")
            break;

        for (i = 0; i < num.size(); i++)
            ans += (int)(num[i] - '0');
        printf("%d\n", ans);
    }
}
