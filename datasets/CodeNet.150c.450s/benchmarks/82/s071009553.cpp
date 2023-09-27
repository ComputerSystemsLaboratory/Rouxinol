#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define rep(i, n) FOR(i, 0, n)

using namespace std;

class Dice
{
public:
    int label[6];

    void in()
    {
        rep(i, 6) scanf("%d", &label[i]);
    }

    void rollS()
    {
        int tmp = label[0];
        label[0] = label[4];
        label[4] = label[5];
        label[5] = label[1];
        label[1] = tmp;
    }
    void rollN()
    {
        int tmp = label[0];
        label[0] = label[1];
        label[1] = label[5];
        label[5] = label[4];
        label[4] = tmp;
    }
    void rollE()
    {
        int tmp = label[0];
        label[0] = label[3];
        label[3] = label[5];
        label[5] = label[2];
        label[2] = tmp;
    }
    void rollW()
    {
        int tmp = label[0];
        label[0] = label[2];
        label[2] = label[5];
        label[5] = label[3];
        label[3] = tmp;
    }

    int ans(int d1, int d2)
    {
        if (label[2] == d2 || label[3] == d2)
            rollW();
        while (label[1] != d2)
            rollS();
        while (label[0] != d1)
            rollW();
        return label[2];
    }
};

int main()
{
    Dice d;
    d.in();
    int q;
    cin >> q;
    int d1[q], d2[q];
    rep(i, q)
    {
        cin >> d1[i] >> d2[i];
        printf("%d\n", d.ans(d1[i], d2[i]));
    }
}
