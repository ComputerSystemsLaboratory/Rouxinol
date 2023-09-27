#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> avg;
    while(true) {
        int n;
        cin >> n;
        if(n==0)
            break;

        vector<int> v(n);
        int sum = 0;
        int ma = -1;
        int mi = 10000;
        for(int i=0;i<n;i++) {
            int vi;
            cin >> vi;
            ma = max(ma, vi);
            mi = min(mi, vi);
            sum += vi;
        }

        sum = sum - ma - mi;
        avg.push_back(sum/(n-2));
    }
    for(int i=0;i<avg.size();i++)
        cout << avg[i] << endl;
}