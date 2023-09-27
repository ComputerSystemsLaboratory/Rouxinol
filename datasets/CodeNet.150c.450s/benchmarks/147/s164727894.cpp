#include <bits/stdc++.h>
#define ll uint64_t
#define vi vector <int>
#define vl vector <ll>
#define dl pair <ll, ll>
#define ii pair <ll, ll>
#define vii vector <ii>
#define graph vector <set <int> >
#define inf 1000000000
 
using namespace std;

int f(int x, int y, int z) {
    return x * x + y * y + z * z + x * y + y * z + x * z;
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 
    int n;
    cin >> n;
    vi arr(n + 1, 0);
    for (int i = 1; i < 101; i++) {
        for (int j = 1; j < 101; j++) {
            for (int k = 1; k < 101; k++) {
                int temp = f(i, j, k);
                if (temp <= n) arr[temp]++;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}