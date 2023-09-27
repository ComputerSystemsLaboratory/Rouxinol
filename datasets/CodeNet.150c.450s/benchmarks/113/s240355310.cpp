#include <iostream>

using namespace std;

int main()
{
    int D[10000], C = 0;

    while (true)
    {
        cin >> D[C];

        if (D[C] == 0) { goto Exit; }

        C++;
    }

    Exit:;

    for (int i = 0; i < C; i++)
    {
        cout << "Case " << i + 1 << ": " << D[i] << endl;
    }

    return 0;
}