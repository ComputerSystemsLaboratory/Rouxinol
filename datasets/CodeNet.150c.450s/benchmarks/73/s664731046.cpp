#include <iostream>
#include <vector>
using namespace std;

void add(vector<int> &a, int i, int x) {
    a[i-1] += x;
}

int getSum(vector<int> &a, int s, int t) {
    int sum = 0;
    for(int i=s-1; i<=t-1; ++i) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n, 0);

    vector<int> com, x, y;
    for(int i=0; i<q; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        com.push_back(a);
        x.push_back(b);
        y.push_back(c);
    }

    for(int i=0; i<q; ++i) {
        if(com[i] == 0) {
            add(a, x[i], y[i]);
        } else if(com[i] == 1) {
            cout << getSum(a, x[i], y[i]) << endl;
        }
    }

    return 0;
}