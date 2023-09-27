#include <bits/stdc++.h>
 
#define loop(n, i) for(int i=0;i<n;i++)
#define from_to(from, to, i) for(int i=from;i<=to;i++)

using namespace std;
typedef long long ll;
const int MAX = 1000010;
const int INF = 1<<29;

int main(int argc, char const* argv[])
{
    vector<int> V;
    for (int i = 1; i*(i+1)*(i+2)/6 < MAX; i++) {
        V.push_back(i*(i+1)*(i+2)/6);
    }

    int all[MAX], odd[MAX];
    fill(all, all+MAX, INF);
    fill(odd, odd+MAX, INF);

    all[0] = odd[0] = 0;
    for (int v : V) {
        loop (v, i) {
            for (int j = 1; i+v*j < MAX; j++) {
                all[i+v*j] = min(all[i+v*j], all[i+v*(j-1)] + 1);

                if (v%2) {
                    odd[i+v*j] = min(odd[i+v*j], odd[i+v*(j-1)] + 1);
                }
            }
        }
    }

    while (1) {
        int n; cin >> n;
        if (!n) break;
        printf("%d %d\n", all[n], odd[n]);
    }

    return 0;
}