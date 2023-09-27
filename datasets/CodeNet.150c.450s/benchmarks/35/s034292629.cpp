#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int maximum_sub_sequense(vector<int> &s)
{
    int max = numeric_limits<int>::min();

    for (auto i = s.begin(); i != s.end(); i++) {
        int sum = 0;
        for (auto j = i; j != s.end(); j++) {
            sum += *j;
            if (sum > max)
                max = sum;
        }
    }

    return max;
}

int main()
{
    for (int n; cin >> n && n;) {
        vector<int> sequence(n);
        for (int x, i = 0; i < n && cin >> x; i++)
            sequence[i] = x;
        cout << maximum_sub_sequense(sequence) << endl;
    }

    return 0;
}