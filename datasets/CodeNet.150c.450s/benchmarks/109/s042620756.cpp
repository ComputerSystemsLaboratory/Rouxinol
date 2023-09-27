#include <bits/stdc++.h>
using namespace std;
const int MAX = 240000;

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        vector<int> table(MAX, 0);
        for (int i = 0; i < n; i++)
        {
            string start, end;
            cin >> start >> end;
            start.erase(remove(start.begin(), start.end(), ':'), start.end());
            end.erase(remove(end.begin(), end.end(), ':'), end.end());

            int int_start = stoi(start);
            int int_end = stoi(end);

            table[int_start]++;
            table[int_end]--;
        }

        vector<int> sum(MAX, 0);
        int tmp_ans = 0;
        for (int i = 0; i < MAX; i++)
        {
            sum[i + 1] = sum[i] + table[i];
            tmp_ans = max(tmp_ans, sum[i + 1]);
        }

        cout << tmp_ans << endl;
    }

    return 0;
}
