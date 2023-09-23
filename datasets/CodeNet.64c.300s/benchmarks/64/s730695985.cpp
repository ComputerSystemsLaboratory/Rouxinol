#include<iostream>

using namespace std;

long euclidean(long n, long m) {
    if (n == m)return m;
    if (n > m)swap(n, m);
    return euclidean(m - n, n);
}

int main() {
    long n, m;
    cin >> n >> m;
    cout << euclidean(n, m) << endl;
}
