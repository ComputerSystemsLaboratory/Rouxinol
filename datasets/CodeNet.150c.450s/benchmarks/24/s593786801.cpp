#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    vector<int> answer;
    while (cin >> n >> m && n != 0)
    {
        int risk = 0;
        vector<pair<int, int> > p_d(n);
        for (int i = 0; i < n; i++)
        {
            int d, p;
            cin >> d >> p;
            p_d.at(i) = make_pair(p, d);
        }
        sort(p_d.rbegin(), p_d.rend());
        for (int i = 0; i < n; i++)
        {
            if (p_d.at(i).second <= m)
            {
                m -= p_d.at(i).second;
            }
            else if (m != 0)
            {
                risk += p_d.at(i).first * (p_d.at(i).second - m);
                m = 0;
            }
            else
            {
                risk += p_d.at(i).first * p_d.at(i).second;
            }
        }
        answer.push_back(risk);
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer.at(i) << endl;
    }
    return 0;
}
