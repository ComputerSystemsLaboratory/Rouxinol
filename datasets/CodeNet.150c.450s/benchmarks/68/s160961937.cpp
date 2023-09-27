#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;

    while(cin>>n, n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            int tmp;
            cin>>tmp;
            a[i] = tmp;
        }

        sort(begin(a), end(a));

        int diff = 10000000;
        for (int i = 0; i < n-1; ++i) {
            diff = min(diff, a[i+1] - a[i]);
        }

        cout<<diff<<endl;
    }
    return 0;
}