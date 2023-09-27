#include <iostream>
#include <algorithm>
#include <vector>

#define MAXV 10000
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cnt(MAXV, 0);

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        cnt[temp]++;
    }
    int count = 0;
    for (int i = 0; i < cnt.size(); i++) {
        while (cnt[i]) {
            if (count)
                cout << " ";
            cout << i;
            count++;
            cnt[i]--;
        }
    }
    cout << endl;
    return 0;
}
