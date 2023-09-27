#include <iostream>
#include <vector>

using namespace std;

long downScore(const vector<int> &c, const vector<int> &last, const int d)
{
    int dScore = 0;
    for (int i = 0; i < 26; ++i)
    {
        dScore += c.at(i) * (d - last.at(i));
    }
    return dScore;
}

int main()
{
    const int typeNum = 26;
    int D;
    cin >> D;

    vector<int> c(typeNum);
    vector<vector<long>> s(D + 1);
    vector<int> last(typeNum);

    for (int i = 0; i < typeNum; ++i)
    {
        cin >> c.at(i);
    }

    for (int j = 1; j <= D; ++j)
    {
        vector<long> dayS(typeNum);
        for (int i = 0; i < typeNum; ++i)
        {
            cin >> dayS.at(i);
        }
        s.at(j) = dayS;
    }

    vector<int> t(D + 1);

    for (int i = 1; i <= D; ++i)
    {
        cin >> t.at(i);
    }

    vector<int> v(D + 1);

    for (int i = 1; i <= D; ++i)
    {
        int type = t.at(i) - 1;
        last.at(type) = i;

        long dayScore =
            s.at(i).at(type) - downScore(c, last, i);

        v.at(i) = v.at(i - 1) + dayScore;
    }

    for (int i = 1; i <= D; ++i )
    {
        cout << v.at(i) << endl;
    }

    return 0;
}