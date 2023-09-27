#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void replace(string &str, int a, int b, string opt)
{
    for (int i = a; i < b + 1; ++i)
        str[i] = opt[i-a];
}

void reverse(string &str, int a, int b)
{
    reverse(&str[a], &str[b+1]);
}

void print(string str, int a, int b)
{
    cout << str.substr(a, b + 1 - a) << endl;
}

int main(void)
{
    string str;
    int n;
    cin >> str >> n;
    for (int i = 0; i < n; ++i) {
        string cmd, opt;
        int a, b;
        cin >> cmd >> a >> b;
        if (cmd == "replace") {
            cin >> opt;
            replace(str, a, b, opt);
        }
        else if (cmd == "reverse") {
            reverse(str, a, b);
        }
        else {
            print(str, a, b);
        }
    }
        
    return 0;
}
