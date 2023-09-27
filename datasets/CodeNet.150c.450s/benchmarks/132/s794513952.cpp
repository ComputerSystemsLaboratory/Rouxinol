# include <vector>
# include <list>
# include <map>
# include <set>
# include <deque>
# include <stack>
# include <bitset>
# include <algorithm>
# include <functional>
# include <numeric>
# include <utility>
# include <sstream>
# include <iostream>
# include <iomanip>
# include <cstdio>
# include <cmath>
# include <cstdlib>
# include <cctype>
# include <string>
# include <cstring>
# include <ctime>
# include <queue>


# define FOR(i, a, b) for(int i{a}; i < (b); ++i)
# define REP(i, n)    FOR(i, 0, n)

using namespace std;

using ll = long long;

template<typename T>
using Vec = vector<T>;



int main()
{


    while (true)
    {
        int n, p;
        cin >> n >> p;

        if (n == 0 && p == 0) {
            break;
        }

        int owan = p;


        Vec<int> counts(n, 0);
        int index = 0;

        while (true) {
            if (owan > 0) {
                counts[index]++;
                owan--;
                if (counts[index] == p) {
                    break;
                }
                index++;
                index %= n;
            }
            else {
                if (counts[index] > 0) {
                    owan += counts[index];
                    counts[index] = 0;
                }
                index++;
                index %= n;
            }
        }

        cout << index << endl;

    }
}
