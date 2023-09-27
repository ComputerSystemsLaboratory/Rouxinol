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

    void roll(char cmd)
    {
        if (cmd == 'S')
        {
            int tmp = label[0];
            label[0] = label[4];
            label[4] = label[5];
            label[5] = label[1];
            label[1] = tmp;
        }
        else if (cmd == 'N')
        {
            int tmp = label[0];
            label[0] = label[1];
            label[1] = label[5];
            label[5] = label[4];
            label[4] = tmp;
        }
        else if (cmd == 'E')
        {
            int tmp = label[0];
            label[0] = label[3];
            label[3] = label[5];
            label[5] = label[2];
            label[2] = tmp;
        }
        else if (cmd == 'W')
        {
            int tmp = label[0];
            label[0] = label[2];
            label[2] = label[5];
            label[5] = label[3];
            label[3] = tmp;
        }
    }
};

int main()
{
    Dice d;
    d.in();
    string cmd;
    cin >> cmd;
    rep(i, cmd.length()) d.roll(cmd[i]);
    printf("%d\n", d.label[0]);
}

