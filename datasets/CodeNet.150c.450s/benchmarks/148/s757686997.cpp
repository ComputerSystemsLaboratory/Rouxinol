#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string str[N];
    int AC, WA, TLE, RE;
    AC = WA = TLE = RE = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> str[i];
        if ("AC" == str[i])
            AC++;
        else if ("WA" == str[i])
            WA++;
        else if ("TLE" == str[i])
            TLE++;
        else
            RE++;
    }

    cout << "AC x " << AC << "\n";
    cout << "WA x " << WA << "\n";
    cout << "TLE x " << TLE << "\n";
    cout << "RE x " << RE << "\n";

    return 0;
}