#include <bits/stdc++.h>

using namespace std;

#define INF (1<<29)

int main()
{
    int N, M;
    while (cin >> N >> M, N) {
        vector<int> a(N), b(M);
        int asum = 0, bsum = 0;
        for (int i = 0; i < N; i++) {
            cin >> a[i];
            asum += a[i];
        }
        for (int i = 0; i < M; i++) {
            cin >> b[i];
            bsum += b[i];
        }
        
        int p1 = -1, p2 = -1, p = INF;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                int nasum = asum - a[i] + b[j];
                int nbsum = bsum - b[j] + a[i];
                if (nasum == nbsum) {
                    if (a[i] + b[j] < p) {
                        p1 = a[i];
                        p2 = b[j];
                        p = a[i] + b[j];                        
                    }                    
                }
            }
        }
        if (p == INF) {
            cout << -1 << endl;
        } else {
            cout << p1 << " " << p2 << endl;
        }
    }
    return 0;
}