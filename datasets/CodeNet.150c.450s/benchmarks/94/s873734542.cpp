#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;

    std::vector<int> line(n);
    for (auto i = 0; i < n; i++) {
        cin >> line.at(i);
    }

    int swap_cnt = 0;
    for (auto i = 0; i < n; i++) {
        for (auto j = n - 1; j > i; j--) {
            if (line.at(j) < line.at(j - 1)) {
                int tmp = line.at(j);
                line.at(j) = line.at(j - 1);
                line.at(j - 1) = tmp;
                swap_cnt++;
            }
        }
    }

    for (auto i = 0; i < n; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << line.at(i);
    }
    cout << endl;

    cout << swap_cnt << endl;

    return 0;
}