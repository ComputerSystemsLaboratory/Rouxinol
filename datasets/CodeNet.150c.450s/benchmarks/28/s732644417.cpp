#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    int n, k;
    int total = 0;
    vector<int> w;
    cin >> n >> k;
    REP(i, n){
        int x;
        cin >> x;
        w.push_back(x);
        total += x;
    }
    int p = total / k;
    while(1){
        int num = 0;
        int track[k];
        REP(i, k){
            track[i] = 0;
            while(num < n && i < k && track[i] + w[num] <= p){
                track[i] += w[num];
                num++;
            }
        }
        if(num == n)
            break;
        p++;
    }
    cout << p << endl;
    return 0;
}