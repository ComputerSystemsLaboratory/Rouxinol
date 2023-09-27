#include <iostream>
#include <vector>
using namespace std;

bool ball(int left, int right, int i, vector<int> &stack) {
    if (i == 10)
        return true;

    if (stack[i] > left)
        return ball(stack[i], right, i + 1, stack);

    if (stack[i] > right)
        return ball(left, stack[i], i + 1, stack);

    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> stack(10);

    while (n--) {
        for (int i = 0; i < 10; i++)
            cin >> stack[i];
        cout << (ball(0, 0, 0, stack) ? "YES" : "NO") << endl;
    }

    return 0;
}