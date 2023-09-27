#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#define INF 1 << 28
using namespace std;

typedef pair<int,int> P;

int main ()
{
    int n;
    while (cin >> n, n) {
        string str1, str2;
        vector<P> time;
        while (n--) {
            cin >> str1 >> str2;
            for (int i = 0; i < str1.size(); i++) {
                if (str1[i] == ':') {
                    str1[i] = str2[i] = ' ';
                }
            }

            stringstream ss1, ss2;
            ss1 << str1;
            ss2 << str2;

            int t1, t2, t3;
            ss1 >> t1 >> t2 >> t3;
            int s = t1 * 60 * 60 + t2 * 60 + t3;
            ss2 >> t1 >> t2 >> t3;
            int e = t1 * 60 * 60 + t2 * 60 + t3;

            time.push_back(P(s,1));
            time.push_back(P(e,-1));
        }

        sort(time.begin(), time.end());

        int res = 0, MAX = 0;
        for (int i = 0; i < time.size(); i++) {
            res += time[i].second;
            MAX = max(MAX, res);
        }

        cout << MAX << endl;
    }

    return 0;
}