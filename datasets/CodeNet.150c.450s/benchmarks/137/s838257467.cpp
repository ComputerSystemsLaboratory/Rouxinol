#include <iostream>
#include <map>
#include <string>

using namespace std;

int
main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    map<string, bool> msb;
    while (n--) {
        string order, text;
        cin >> order >> text;
        if (order == "insert") {
            msb.insert(pair<string, bool>(text, true));
        } else if (order == "find") {
            auto iter = msb.find(text);
            if (iter != msb.end()) cout << "yes";
            else cout << "no";
            cout << endl;
        }
    }
    return 0;
}