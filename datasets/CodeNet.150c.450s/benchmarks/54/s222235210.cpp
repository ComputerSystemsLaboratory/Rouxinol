#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w;
    cin >> w;
    cin.ignore();

    // // upper to lower conversion
    // for (long unsigned int i = 0; i < w.length(); i++)
    // {
    //     if ('A' <= w[i] && w[i] <= 'Z')
    //     {
    //         w[i] += 'a' - 'A';
    //     }
    // }

    int cnt = 0;
    while (1)
    {
        string s;
        getline(cin, s);
        if (s == "END_OF_TEXT")
            break;

        // upper to lower conversion
        for (long unsigned int i = 0; i < s.length(); i++)
        {
            if ('A' <= s[i] && s[i] <= 'Z')
            {
                s[i] += 'a' - 'A';
            }
        }

        // cout << s << endl;

        // bool condition = false;

        // search and counting
        for (long unsigned int i = 0; i < s.length() - w.length() + 1; i++)
        {

            bool flag1 = ((i == 0 && s.substr(i, w.length()) == w) || (s[i - 1] == ' ' && s.substr(i, w.length()) == w));
            bool flag2 = (s[i + w.length()] == '\n' || s[i + w.length()] == '\0' || s[i + w.length()] == ' ');
            // cout << i << endl;
            // cout << "i = " << i << ", Cond1: " << (bool) ((i == 0 && s.substr(i, w.length()) == w) || (s[i - 1] == ' ' && s.substr(i, w.length()) == w)) << endl;
            // cout << "i = " << i << ", Cond2: " << (bool) (s[i + w.length()] == '\n' || s[i + w.length()] == '\0' || s[i + w.length()] == ' ') << endl;

            // (s[i + w.length() - 1] == '\n' || s[i + w.length() - 1] == '\0' || s[i + w.length() - 1] == ' ') if (((i == 0 && s.substr(i, w.length()) == w) || (s[i] == ' ' && s.substr(i + 1, w.length()) == w)) && (s[i + w.length() - 1] == '\n' || s[i + w.length() - 1] == '\0' || s[i + w.length() - 1] == ' '))
            if ((flag1 && flag2) == true)
            {
                cnt++;
            }
            // {
            //     cnt++;
            // }
            // cout << s.substr(i, w.length()) << endl;
        }

        // cout << cnt << endl;
    }

    cout << cnt << endl;
    return 0;
}
