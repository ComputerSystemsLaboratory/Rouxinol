#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[201], t[201];
    int len, n, h;
    while (1)
    {
        cin >> s;
        len = strlen(s);
        if (len == 1 && s[0] == '-')
            break;
        cin >> n;
        while (n--) {
            cin >> h;
            for (int i = 0, j = h; i < len; i++,++j%=len){
                if (i < h)
                    t[i] = s[j];
                else
                    t[i] = s[j];
            }
            for (int i = 0; i < len; i++)
                s[i] = t[i];
            s[len] = '\0';
        }
        cout << s << endl;
    }
    return 0;
}