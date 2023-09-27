#include <iostream>
#include <string>

using namespace std;

int
main(int argc, const char *argv[])
{
    string s, p;
    cin >> s >> p;
    auto s_len = s.size();
    s = s + s;
    bool find = false;
    for (decltype(s_len) i = 0; i != s_len; ++i) {
        string sub_str = s.substr(i, p.size()); 
        if (sub_str == p) find = true;
    }
    if (find) cout << "Yes";
    else cout << "No";
    cout << endl;

    return 0;
}