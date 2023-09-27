#include <iostream>

using namespace std;

static int N = 250;

int main()
{
    int n, tree[N];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tree[i];
    }

    for (int i = 0 ; i < n; i++)
    {
        cout << "node " << i + 1 << ": "
             << "key = " << tree[i] << ", ";
        if (i > 0)
            cout << "parent key = " << tree[(i-1) / 2] << ", ";
        if (2 * i + 1 < n)
            cout << "left key = " << tree[2 * i + 1] << ", ";
        if (2 * i + 2 < n)
            cout << "right key = " << tree[2 * i + 2] << ", ";
        cout << endl;
    }
}

