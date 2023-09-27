#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

class Dice {
    array<int, 6> dice;

    void _roll(int a, int b, int c, int d)
    {
        int tmp = dice[a];
        dice[a] = dice[b];
        dice[b] = dice[c];
        dice[c] = dice[d];
        dice[d] = tmp;
    }

public:
    Dice(int d1, int d2, int d3, int d4, int d5, int d6)
    {
        dice[0] = d1;
        dice[1] = d2;
        dice[2] = d3;
        dice[3] = d4;
        dice[4] = d5;
        dice[5] = d6;
    }

    int top()
    {
        return dice[0];
    }

    void roll(char dir)
    {
        switch (dir) {
        case 'S':
            _roll(0, 1, 5, 4);
            _roll(0, 1, 5, 4);
        case 'N':
            _roll(0, 1, 5, 4);
            break;
        case 'E':
            _roll(0, 2, 5, 3);
            _roll(0, 2, 5, 3);
        case 'W':
            _roll(0, 2, 5, 3);
            break;
        }
    }

    int right(int _top, int _front)
    {
        for (size_t i = 0; i < 6; i++) {
            for (size_t j = 0; j < 4; j++) {
                if (dice[0] == _top && dice[1] == _front)
                    goto out;

                _roll(1, 2, 4, 3);
            }

            if (i % 2) {
                _roll(0, 1, 5, 4);
            } else {
                _roll(0, 2, 5, 3);
            }
        }

    out:
        return dice[2];
    }
};

int main()
{
    array<int, 6> d;
    for (auto&& i : d) {
        cin >> i;
    }
    Dice dice(d[0], d[1], d[2], d[3], d[4], d[5]);

    // string str;
    // cin >> str;
    // for (auto&& c : str) {
    //     dice.roll(c);
    // }

    // cout << dice.top() << endl;

    int q;
    cin >> q;

    for (size_t i = 0; i < q; i++) {
        int top, front;
        cin >> top >> front;

        cout << dice.right(top, front) << endl;
    }
}

