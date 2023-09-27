#include <bits/stdc++.h>

using namespace std;

#define MAX 25

int main()
{
    int N, M;
    bool t[MAX][MAX];
    while (cin >> N, N) {
        int x, y;
        memset(t, 0, sizeof(t));
        for (int i = 0; i < N; i++) {
            cin >> x >> y;
            t[y][x] = 1;
        }
        cin >> M;
        char d;
        int num;
        
        map<char, int> dir = {{'W', 0}, {'S', 1}, {'E', 2}, {'N', 3}};
        const int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};

        x = y = 10;
        
        for (int i = 0; i < M; i++) {
            cin >> d >> num;
            for (int j = 0; j < num; j++) {
                x += dx[dir[d]], y += dy[dir[d]];
                if (t[y][x]) t[y][x] = 0;                
            }
        }
        
        bool rem = 0;
        for (int i = 0; i <= 20; i++) {
            for (int j = 0; j <= 20; j++) {
                if (t[i][j]) {
                    rem = 1;                    
                }
            }
        }
        cout << (rem ? "No" : "Yes") << endl;
    }
    return 0;
}