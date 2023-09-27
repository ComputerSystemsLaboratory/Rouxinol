#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    string w;
    string s;
    int count = 0;
    cin >> w;
    transform(w.begin(), w.end(), w.begin(), ::tolower);
    while (cin >> s && s != "END_OF_TEXT")
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s == w)
            count++;
    }
    cout << count << endl;

    return 0;
}
