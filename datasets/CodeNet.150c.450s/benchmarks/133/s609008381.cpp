#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int D{ 0 }, ret{ 0 };
    cin >> D;

    std::vector<int> c(26), t(D), last(26);
    std::vector<std::vector<int>> s(D, vector<int>(26));

    for (auto& i : c)
    {
        cin >> i;
    }

    for (auto& i : s)
    {
        for (auto& j : i)
            cin >> j;
    }

    for (auto& i : t)
        cin >> i;

    for (int day{ 0 }; day < D; ++day)
    {
        for (int num{ 1 }; num <= 26; ++num)
        {
            if (t.at(day) == num)
            {
                ret += s.at(day).at(num - 1);
                last.at(num - 1) = day + 1;
            }
            else
            {
                ret -= c.at(num - 1) * ((day + 1) - last.at(num - 1));
            }
        }
        cout << ret << "\n";
    }
}
