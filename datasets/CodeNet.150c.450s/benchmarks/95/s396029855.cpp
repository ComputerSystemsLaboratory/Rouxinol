#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main()
{
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            return 0;
        }

        bool upper = false;
        pair<bool, bool> state = make_pair(false, false);
        int count = 0;
        for (int i = 0; i < n; ++i) {
            string op;
            cin >> op;
            if (op == "lu") {
                state = make_pair(true, state.second);
            }
            else if (op == "ru") {
                state = make_pair(state.first, true);
            }
            else if (op == "ld") {
                state = make_pair(false, state.second);
            }
            else {
                state = make_pair(state.first, false);
            }
            if (upper && !state.first && !state.second) {
                count += 1;
                upper = false;
            }
            else if (!upper && state.first && state.second) {
                count += 1;
                upper = true;
            }
        }
        cout << count << endl;
    }
}