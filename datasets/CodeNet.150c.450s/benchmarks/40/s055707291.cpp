#include <iostream>
#include <array>
using namespace std;

typedef array<int, 6> dice;

int main()
{
    dice d;
    enum {N, S, E, W};
    array<dice, 4> rot = {
        1, 5, 2, 3, 0, 4,
        4, 0, 2, 3, 5, 1,
        3, 1, 0, 5, 4, 2,
        2, 1, 5, 0, 4, 3};

    for (int &x: d)
        cin >> x;

    for (char c; cin >> c;) {
        int r; 
        switch (c) {
        case 'N': r = N; break;
        case 'S': r = S; break;
        case 'E': r = E; break;
        case 'W': r = W; break;
        }

        dice res;
        for (size_t i = 0; i < res.size(); i++)
            res[i] = d[rot[r][i]];
        d = move(res);
    }

    cout << d[0] << endl;

    return 0;
}
