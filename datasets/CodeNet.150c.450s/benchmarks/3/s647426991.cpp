#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, comm, sa, sb, sinj;
    cin >> str;

    int n, a, b;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, comm, ' ');
        if (comm.substr(0, 5) == "print") {
            getline(cin, sa, ' ');
            getline(cin, sb, '\n');
            // cout << "sa = " << sa << " sb = " << sb << endl;
            a = stoi(sa);
            b = stoi(sb);
            // cout << "a = " << a << " b = " << b << endl;
            cout << str.substr(a, b - a + 1) << endl;
        }
        else if (comm.substr(0, 7) == "reverse") {
            getline(cin, sa, ' ');
            getline(cin, sb, '\n');

            a = stoi(sa);
            b = stoi(sb);

            string revstr = str.substr(a, b - a + 1);
            reverse(revstr.begin(), revstr.end());
            str = str.substr(0, a) + revstr + str.substr(b + 1, str.length() - b - 1);

            // cout << str << endl;
        } else {
            getline(cin, sa, ' ');
            getline(cin, sb, ' ');
            getline(cin, sinj, '\n');

            a = stoi(sa);
            b = stoi(sb);

            str = str.substr(0, a) + sinj + str.substr(b + 1, str.length() - b - 1);

            // cout << str << endl;
        }
    }
    return 0;
}
