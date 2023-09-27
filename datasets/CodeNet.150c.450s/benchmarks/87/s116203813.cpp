#include <bits/stdc++.h>

using namespace std;

int erase(int H, vector<vector<int>> &p)
{
    int point = 0;
    for (int i = 0; i < H; i++) {        
        for (int j = 0; j < 5; j++) {
            int num = p[i][j], nj = j;
            if (num == -1) continue;
            for (int k = j + 1; k < 5; k++) {
                if (num != p[i][k]) {
                    break;
                }
                nj = k;
            }
            if (nj - j + 1 >= 3) {
                for (int k = j; k <= nj; k++) {
                    p[i][k] = -1;
                }
                point += num * (nj - j + 1);
            }
        }
    }
    return point;
}

void drop(int H, vector<vector<int>> &p)
{
    for (int i = H-1; i > 0; i--) {
        for (int j = 0; j < 5; j++) {
            if (p[i][j] == -1) {
                int k = i;            
                while (k > 0 && p[k][j] == -1) {
                    k--;
                }
                swap(p[i][j], p[k][j]);
            }
        }
    }
}

int get_point(int H, vector<vector<int>> &p)
{
    int point = 0;
    while (1) {
        int npoint = point + erase(H, p);
        if (point == npoint) break;
        drop(H, p);
        point = npoint;
    }
    return point;
}

int main()
{
    int H;
    while (cin >> H, H) {
        vector<vector<int>> p(H, vector<int>(5));
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> p[i][j];
            }
        }
        cout << get_point(H, p) << endl;
    }
    return 0;
}