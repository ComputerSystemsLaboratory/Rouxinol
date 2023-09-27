#include <iostream>
#include <algorithm>
using namespace std;

void print(string str, int a, int b)
{
    cout << str.substr(a, b - a + 1) << endl;
}

string reverse(string str, int a, int b)
{
    string left = str.substr(0, a);
    string middle = str.substr(a, b - a + 1);
    string right = str.substr(b + 1);

    reverse(middle.begin(), middle.end());

    return left + middle + right;
}

string replace(string str, int a, int b, string p)
{
    string left = str.substr(0, a);
    string middle = str.substr(a, b - a + 1);
    string right = str.substr(b + 1);

    return left + p + right;
}

int main()
{
    string str, func;
    int n;

    cin >> str >> n;

    for (int i = 0; i < n; i++) {
        cin >> func;

        if (!func.compare("reverse")) {
            int a, b;

            cin >> a >> b;

            str = reverse(str, a, b);
        } else if (!func.compare("replace")) {
            int a, b;
            string s;

            cin >> a >> b >> s;

            str = replace(str, a, b, s);
        } else if (!func.compare("print")) {
            int a, b;

            cin >> a >> b;

            print(str, a, b);
        }
    }

    return 0;
}