#include <iostream>

using namespace std;

int main()
{
    bool flag[30] = {false};
    int idx;

    for (int i = 0; i < 30; i++) {
        cin >> idx;
        flag[idx - 1] = true;
    }
    for (int i = 0; i < 30; i++)
        if (!flag[i])
            cout << i + 1 << endl;

    return 0;
}