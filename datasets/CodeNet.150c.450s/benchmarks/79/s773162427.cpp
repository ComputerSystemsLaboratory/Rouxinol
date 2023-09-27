#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, r;
    int p, c;
    r = 0;
    vector<int> card;
    vector<int> reserve;
    while (true) {
        if (r == 0) {
            cin >> n >> r;
            if (n == 0 && r == 0)
                break;
            for (int i = 0; i < n; i++) {
                card.push_back(i + 1);
            }
            continue;
        }
        cin >> p >> c;
        for (int i = n - p + 1; i < n; i++) {
            reserve.push_back(card.at(i));
        }
        for (int i = n - (p - 1) - c; i < n - (p - 1); i++) {
            reserve.push_back(card.at(i));
        }
        {
            int j = 0;
            for (int i = n - (p - 1) - c; i < n; i++) {
                card.at(i) = reserve.at(j);
                j++;
            }
        }
        reserve.clear();
        reserve.shrink_to_fit();
        r--;
        if (r == 0) {
            cout << card.at(n - 1) << endl;
            card.clear();
            card.shrink_to_fit();
        }
    }
}
