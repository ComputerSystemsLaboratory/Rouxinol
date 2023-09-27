
#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

int calc(int x, int y, int z) {
    return (x * x + y * y + z * z + x * y + y * z + z * x);
}
int contribute(int x, int y, int z) {
    set<int> freq;
    freq.insert(x); freq.insert(y); freq.insert(z);
    if (freq.size() == 3)
        return 6;
    if (freq.size() == 2)
        return 3;
    return 1;
}

int main() {
    //  ios_base::sync_with_stdio(0); 
      //cin.tie(0); 
      //cout.tie(0);
      //freopen("input.txt", "r", stdin);
      //freopen("output.txt", "w", stdout);
    int T = 1;
    int val[100 * 100 + 5] = {};
    for (int x = 1; x < 100; x++) {
        for (int y = x ; y < 100; y++) {
            for (int z = y; z < 100; z++) {
                if (calc(x, y, z) > 100 * 100)
                    break;
              //  cout << x << " " << y << " " << z << " " << calc(x, y, z) << endl;
                val[calc(x, y, z)] += contribute(x, y, z);
            }
        }
    }



        scanf("%d", &T);
        for (int i = 1; i <=T; i++) {

            printf("%d\n", val[i]);
        }

    return 0;
}
