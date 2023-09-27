#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            return 0;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        bool flag_left = 0, flag_right = 0, aim = 1;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == "lu")
                flag_left = 1;
            else if (v[i] == "ru")
                flag_right = 1;
            else if (v[i] == "ld")
                flag_left = 0;
            else
            {
                flag_right = 0;
            }

            if (aim && flag_left == 1 && flag_right == 1)
            {
                aim = 0;
                sum++;
            }
            else if (!aim && flag_left == 0 && flag_right == 0)
            {
                aim = 1;
                sum++;
            }
        }
        cout << sum << endl;
    }
}

