#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string ike(string s, int* t)
{
    string c;
    int i = *t, d = *t;
    while (i < s.size())
    {
        int down = 0, up = 0;
        while (i < s.size())
        {
            if (s[i] == '\\') {
                down++;
            }
            else if (s[i] == '/') {
                break;
            }
            i++;
        }
        while (i < s.size())
        {
            if (s[i] == '/') {
                up++;
            }
            else if (s[i] == '\\')
            {
                up--;
            }
            if (down == up) {
                for (int j = d; j < i+1; j++)
                {
                    c += s[j];
                }
                *t = i;
                return c;
            }
            i++;
        }
        i = ++d;
    }
    return "";
}

int main()
{
    string s, c;
    cin >> s;

    int a = 0, b = 0, h = 0, i = 0;
    double sum[20000] = {}, sums=0;
    while (i < s.size())
    {
        while (i < s.size() && s[i] != '\\')
            i++;

        c = ike(s, &i);
        if (c == "")
            break;

        b = 0;
        a++;
        while (b < c.size())
        {
            if (c[b] == '\\')
            {
                sum[a-1] += 0.5 + (h * 1);
                h++;
            }
            else if (c[b] == '/')
            {
                if(0 < h){
                    sum[a - 1] += 0.5 + ((h-1)*1);
                    h--;
                }
            }
            else {
                sum[a - 1] += (h * 1);
            }
            b++;
        }
        sums += sum[a - 1];
    }

    cout << fixed << setprecision(0) << sums << "\n";
    cout << fixed << setprecision(0) << a;
    if (sums != 0) {
        cout << " ";
        for (i = 0; i < a; i++)
            cout << fixed << setprecision(0) << sum[i] << (i < a - 1 ? " " : "\n");
    }
    else
        cout << "\n";
}

