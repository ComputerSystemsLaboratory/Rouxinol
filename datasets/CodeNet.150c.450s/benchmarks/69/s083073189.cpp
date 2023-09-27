#include <iostream>
#include <vector>

using namespace std;

int ball_db[10];

void solve()
{
    vector<int> left;
    vector<int> right;

    left.push_back(0);
    right.push_back(0);

    for (int i = 0; i < 10; ++i) {
        if (ball_db[i] > left.back()) {
            left.push_back(ball_db[i]);
        } else if (ball_db[i] > right.back()) {
            right.push_back(ball_db[i]);
        } else {
            cout << "NO" << endl;
            return;
        }
    }

    if (left.size() + right.size() == 10 + 2) {
        cout << "YES" << endl;
    }
}

int main()
{
    int data_num;

    cin >> data_num;

    for (int i = 0; i < data_num; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin >> ball_db[j];
        }
        solve();
    }


    return 0;
}