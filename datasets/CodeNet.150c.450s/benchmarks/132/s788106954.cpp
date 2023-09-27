#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, p;
    while (cin >> n >> p, n | p) {
        vector<int> candidates(n, 0);
        int wan = p;
        while (true) {
            for (size_t i = 0; i < candidates.size(); ++i) {
                auto & candidate = candidates[i];
                if (wan != 0) {
                    --wan;
                    ++candidate;
                } else {
                    if (candidate == p) {
                        cout << i;
                        goto game_end;
                    }
                    wan += candidate;
                    candidate = 0;
                }
            }
        }
game_end:
        cout << endl;
    }
    return 0;
}