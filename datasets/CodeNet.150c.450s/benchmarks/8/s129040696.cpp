#include <iostream>
using namespace std;

int main()
{
    int n;
    string t, h;
    int tScore = 0;
    int hScore = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t >> h;

        if (t.compare(h) > 0) {
            tScore += 3;
        } else if (t.compare(h) < 0) {
            hScore += 3;
        } else {
            tScore += 1;
            hScore += 1;
        }
    }

    cout << tScore << " " << hScore << endl;

    return 0;
}