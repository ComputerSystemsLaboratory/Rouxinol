#include <iostream>
#include <string>
using namespace std;

int judge(string a, string b)
{
    int la = a.length();
    int lb = b.length();
    int l  = (la < lb)? la : lb;

    for (int i = 0; i < l; ++i) {
        if (a[i] > b[i])
            return 3;
         else if (a[i] < b[i])
             return 0;
    }

    if (la > lb)
        return 3;
    else if (la < lb)
        return 0;
    else
        return 1;
}

int main(void)
{
    int n, p1 = 0, p2 = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string a, b;
        cin >> a >> b;
        int tmp1, tmp2;
        tmp1 = judge(a, b);
        tmp2 = judge(b, a);

        p1 += tmp1;
        p2 += tmp2;
    }

    cout << p1 << " " << p2 << endl;

    return 0;
}
