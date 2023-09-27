#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ans;
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }

        int count = 0;
        string input1;
        cin >> input1;
        for (int i = 0; i < n - 1; i++)
        {
            string input2;

            cin >> input2;
            if (input1 == "lu" && input2 == "ru")
            {
                count++;
            }
            else if (input1 == "ru" && input2 == "lu")
            {
                count++;
            }
            else if (input1 == "ld" && input2 == "rd")
            {
                count++;
            }
            else if (input1 == "rd" && input2 == "ld")
            {
                count++;
            }
            input1 = input2;
        }

        ans.push_back(count);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}
