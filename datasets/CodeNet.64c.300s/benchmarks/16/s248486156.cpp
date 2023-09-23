#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char **argv)
{
        int n;
        cin >> n;
        int minr = INT_MAX, maxp = -INT_MAX;
        for (int i = 0; i < n; i++) {
                int r;
                cin >> r;
                if (i > 0)
                        maxp = max(r - minr, maxp);
                minr = min(r, minr);
        }
        cout << maxp << endl;
        return 0;
}