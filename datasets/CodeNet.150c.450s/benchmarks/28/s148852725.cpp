/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_D
 */
#include <iostream>
#include <vector>

using namespace std;

int
checkfit(const vector<int> &w, const int p)
{
    int count = 1;
    int load = 0;
    for (int it : w) {
        if (load + it > p) {
            load = it;
            count++;
        } else {
            load += it;
        }
    }
    return count;
}

int
main()
{
    ios_base::sync_with_stdio(false);
    
    int n, k;
    cin >> n >> k; cin.ignore();

    vector<int> w(n);
    int total = 0;
    int wmax = 0;
    for (int i = 0; i < n; i++) {
        cin >> w[i]; cin.ignore();
        total += w[i];
        if (w[i] > wmax) wmax = w[i];
    }

    int p = max(total / k, wmax);
    while (checkfit(w, p) > k) p++;

    cout << p << endl;
    return 0;
}