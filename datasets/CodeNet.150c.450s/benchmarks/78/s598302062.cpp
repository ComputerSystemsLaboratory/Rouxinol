#include<iostream>
#include<vector>

using namespace std;

vector<int> v;
vector<int> vodd;
const int N = 1000001;

int dp[N];
int dpodd[N];

void dodp(int arr[], vector<int>& v) {
    for (int i = 0; i < N; ++i) {
        arr[i] = 1000;
    }
    arr[0] = 0;

    for (int vi : v) {
        for (int i = 0; i < N; ++i) {
            if (i - vi >= 0 && arr[i - vi] != 1000) {
                arr[i] = min(arr[i], arr[i - vi] + 1);
            }
        }
    }
}

int main() {
    v.push_back(1);
    vodd.push_back(1);
    int tri = 1;
    int i = 2;
    while(v.back() <= 1000000 ) {
        tri += i;
        int tmp = v.back() + tri;
        v.push_back(tmp);
        if (tmp % 2 == 1) vodd.push_back(tmp);
        ++i;
    }
    // v.size() = 181

    dodp(dp, v);
    dodp(dpodd, vodd);

    // for (int i = 0; i < N; ++i) {
    //     cout << dpodd[i] << " ";
    // }
    // cout << endl;
    while(1) {
        int n;
        cin >> n;
        if (n == 0) break;
        cout << dp[n] << " " << dpodd[n] << endl;
    }
}

