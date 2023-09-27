#include <iostream>
#include <string>

using namespace std;

int
main(int argc, const char *argv[])
{
    string x;
    while (cin >> x) {
        if (x == "0") break;
        int s = 0;
        for (auto &e : x) {
            s += e - '0';    
        }
        cout << s << endl;
    }

    return 0;
}