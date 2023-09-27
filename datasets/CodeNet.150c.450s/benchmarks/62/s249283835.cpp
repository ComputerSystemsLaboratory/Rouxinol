#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    string as = to_string(a);
    string bs = to_string(b);
    string cs = to_string(c);

    string s;
    if (a <= b && a <= c) // aが最小
    {
        s += (as + " ");
        if (b <= c) s += (bs + " " + cs);
        else s += (cs + " " + bs);
    }
    else if (b <= a && b <= c) // bが最小
    {
        s += (bs + " ");
        if (a <= c) s += (as + " " + cs);
        else s += (cs + " " + as);
    }
    else if (c <= a && c <= b) // cが最小
    {
        s += (cs + " ");
        if (a <= b) s += (as + " " + bs);
        else s += (bs + " " + as);
    }
    cout << s << endl;

    return 0;
}