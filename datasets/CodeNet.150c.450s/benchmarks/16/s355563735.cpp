/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_D
 */
#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int
main()
{
    string line;
    getline(cin, line);

    stack<int> pond;
    stack<pair<int, int> > areastack;
    int total = 0;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == '\\') {
            pond.push(i);
        } else if (pond.size() > 0 && line[i] == '/') {
            int j = pond.top();
            pond.pop();
            int a = i - j;
            total += a;
            while (areastack.size() > 0 && areastack.top().first > j) {
                a += areastack.top().second;
                areastack.pop();
            }
            areastack.push(make_pair(j, a));
        }
    }

    vector<int> areas(areastack.size());
    int index = 0;
    while (areastack.size() > 0) {
        areas[index++] = areastack.top().second;
        areastack.pop();
    }

    cout << total << endl;
    cout << areas.size();
    for (auto it = areas.crbegin(); it != areas.crend(); it++) {
        cout << ' ' << *it;
    }
    cout << endl;

    return 0;
}