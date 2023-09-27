#include <iostream>
#include <map>

using namespace std;

int main()
{
    string s, x;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] < 'a')
            s[i] += 32;
    while (cin >> x)
    {
        if (x == "END_OF_TEXT")
            break;
        for (int i = 0; i < x.size(); i++)
            if (x[i] < 'a')
                x[i] += 32;
        if (s == x)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}