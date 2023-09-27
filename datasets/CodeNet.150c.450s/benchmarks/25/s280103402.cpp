#include <iostream>
#include <map>
#include <functional>
#include <cstring>
using namespace std;

void alpha_loop(function<void(int)> f)
{
    for (int a = 'a'; a <= 'z'; a++)
    {
        f(a);
    }
}

int main(void)
{
    map<int, int> m;
    alpha_loop([&](char c) { m[c] = 0; });
    while (1)
    {
        char c;
        cin >> c;
        if (!cin) break;
        if (isalpha(c))
        {
            m[tolower(c)]++;
        }
    }
    alpha_loop([&](char c) { cout << c << " : " << m[c] << endl; });


    return 0;
}