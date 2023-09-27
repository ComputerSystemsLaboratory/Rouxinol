#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main()
{
    vector<int> b(101, 0);
    int t;
    while (cin >> t) b[t]++;

    vector<pair<int, int> > v;
    for (int i = 1; i < 101; ++i) v.push_back(make_pair(-b[i], i));
    sort(v.begin(), v.end());
    for (int i = 0; i < 101; ++i) if (v[i].first == v[0].first)
        cout << v[i].second << endl;

    return 0;
}