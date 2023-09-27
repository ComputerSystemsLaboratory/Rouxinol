#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> sum_of_scores(2, 0);

    for (auto &s : sum_of_scores) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        s = a + b + c + d;
    }

    cout << max(sum_of_scores[0], sum_of_scores[1]) << endl;

    return 0;
}