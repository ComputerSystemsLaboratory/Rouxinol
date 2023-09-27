#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, p;
    while (cin >> n >> p, n | p)
    {
        vector<int> stones_of_candidates(n, 0);
        int i = 0;
        while (true)
        {
            if (0 < p)
            {
                ++stones_of_candidates[i];
                --p;
            }
            else
            {
                p += stones_of_candidates[i];
                stones_of_candidates[i] = 0;
                if (all_of(stones_of_candidates.begin(), stones_of_candidates.end(), [](int x) { return x == 0; }))
                {
                    cout << i << endl;
                    break;
                }
            }


            if (i < n - 1)
            {
                ++i;
            }
            else
            {
                i = 0;
            }
        }
    }
    return 0;
}