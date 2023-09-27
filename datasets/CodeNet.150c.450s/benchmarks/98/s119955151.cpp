#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m, n | m)
    {
        vector<int> taro_cards(n);
        vector<int> hanako_cards(m);
        for (auto &card : taro_cards)
        {
            cin >> card;
        }
        for (auto &card : hanako_cards)
        {
            cin >> card;
        }

        auto taro_sum = accumulate(taro_cards.begin(), taro_cards.end(), 0);
        auto hanako_sum = accumulate(hanako_cards.begin(), hanako_cards.end(), 0);
        int min_swapped_score_taro = 101;
        int min_swapped_score_hanako = 101;
        for (int i = 0; i < taro_cards.size(); ++i)
        {
            for (int j = 0; j < hanako_cards.size(); ++j)
            {
                auto taro_sum_swapped = taro_sum - taro_cards[i] + hanako_cards[j];
                auto hanako_sum_swapped = hanako_sum - hanako_cards[j] + taro_cards[i];
                if (taro_sum_swapped == hanako_sum_swapped)
                {
                    auto sum_swapped = taro_cards[i] + hanako_cards[j];
                    if (sum_swapped < min_swapped_score_taro + min_swapped_score_hanako)
                    {
                        min_swapped_score_taro = taro_cards[i];
                        min_swapped_score_hanako = hanako_cards[j];
                    }
                }
            }
        }

        if (min_swapped_score_taro == 101)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << min_swapped_score_taro << " " << min_swapped_score_hanako << endl;
        }
    }

    return 0;
}