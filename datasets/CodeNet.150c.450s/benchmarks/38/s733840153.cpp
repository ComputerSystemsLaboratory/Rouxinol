#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int l[3];
    int N;
    cin >> N;
    for(int i=0; i<N; ++i) {
        cin >> l[0] >> l[1] >> l[2];
        sort(begin(l), end(l));
        cout << (l[0]*l[0] + l[1]*l[1] == l[2]*l[2] ? "YES" : "NO") << endl;
    }
}