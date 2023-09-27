#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string w, text;
    int ans = 0;
    cin >> w;

    while (true)
    {
        cin >> text;
        if (text == "END_OF_TEXT")
            break;

        transform(text.begin(), text.end(), text.begin(), ::tolower);
        if (text == w)
            ans++;
    }

    printf("%d\n", ans);
}
