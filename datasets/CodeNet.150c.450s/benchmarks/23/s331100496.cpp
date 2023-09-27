#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> memo(n + 1, -1);
    function<int(int)> f = [&memo, &f](int nn) -> int {
        if (memo[nn] != -1) {
            return memo[nn];
        }
        else if (nn == 0) {
            memo[nn] = 1;
        }
        else if (nn == 1) {
            memo[nn] = 1;
        }
        else {
            memo[nn] = f(nn - 1) + f(nn - 2);
        }
        return memo[nn];
    };

    cout << f(n) << endl;
}