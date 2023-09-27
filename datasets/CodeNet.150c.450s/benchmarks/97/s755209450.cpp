#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

struct pable {
    int up, down, left, right;
    pable(int up, int down, int left, int right)
        : up(up), down(down), left(left), right(right) {}
    pable() {}
};

pable square[202];
int N, n, d;
bool is_search[202];

pable solve(int x, pable p) {
    //cout << "now is " << x << endl;    
    is_search[x] = true;
    pable tmp, ret = p;
    if (square[x].left != -1 && is_search[square[x].left] == false) {
        tmp = solve(square[x].left, pable(p.up, p.down, p.left + 1, p.right - 1));
        if (ret.up < tmp.up) ret.up = tmp.up;
        if (ret.down < tmp.down) ret.down = tmp.down;
        if (ret.left < tmp.left) ret.left = tmp.left;
        if (ret.right < tmp.right) ret.right = tmp.right;
    }
    if (square[x].right != -1 && is_search[square[x].right] == false) {
        tmp = solve(square[x].right, pable(p.up, p.down, p.left - 1, p.right + 1));
        if (ret.up < tmp.up) ret.up = tmp.up;
        if (ret.down < tmp.down) ret.down = tmp.down;
        if (ret.left < tmp.left) ret.left = tmp.left;
        if (ret.right < tmp.right) ret.right = tmp.right;
    }
    if (square[x].up != -1 && is_search[square[x].up] == false) {
        tmp = solve(square[x].up, pable(p.up + 1, p.down - 1, p.left, p.right));
        if (ret.up < tmp.up) ret.up = tmp.up;
        if (ret.down < tmp.down) ret.down = tmp.down;
        if (ret.left < tmp.left) ret.left = tmp.left;
        if (ret.right < tmp.right) ret.right = tmp.right;
    }
    if (square[x].down != -1 && is_search[square[x].down] == false) {
        tmp = solve(square[x].down, pable(p.up - 1, p.down + 1, p.left, p.right));
        if (ret.up < tmp.up) ret.up = tmp.up;
        if (ret.down < tmp.down) ret.down = tmp.down;
        if (ret.left < tmp.left) ret.left = tmp.left;
        if (ret.right < tmp.right) ret.right = tmp.right;
    }
        
    return ret;
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (cin >> N, N) {
        fill(square, square + N, pable(-1, -1, -1, -1));
        memset(is_search, false, sizeof(is_search));
        for (int i = 0; i < N-1; ++i) {
            cin >> n >> d;
            if (d == 0) {
                square[n].left = i+1;
                square[i+1].right = n;
            } else if (d == 1) {
                square[n].down = i+1;
                square[i+1].up = n;
            } else if (d == 2) {
                square[n].right = i+1;
                square[i+1].left = n;
            } else if (d == 3) {
                square[n].up = i+1;
                square[i+1].down = n;
            }
        }
        pable ans = solve(0, pable(0, 0, 0, 0));
        int width, height;
        width = ((ans.left > 0) ? ans.left : 0) + ((ans.right > 0) ? ans.right : 0) + 1;
        height = ((ans.up > 0) ? ans.up : 0) + ((ans.down > 0) ? ans.down : 0) + 1;
        //cout << "ans is ";
        cout << width << " " << height << endl;
    }

    return 0;
}