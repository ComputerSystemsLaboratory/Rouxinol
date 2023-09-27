#include <iostream>
#include <vector>
using namespace std;

bool check (vector<int> n) {
    int count = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] != 0) {
            count++;
        }
    }
    return count == 1 ? false : true;
}

int main ()
{
    int a, b;
    while (cin >> a >> b, (a || b)) {
        vector<int> n(a);
        int s  = 0;
        while (b || check(n)) {
            if (b > 0) {
                b--, n[s]++;
            } else {
                b += n[s], n[s] = 0;
            }
            if (!check(n) && !b) break;
            s = (s+1) % a;
        }
        cout << s  << endl;
    }

    return 0;
}