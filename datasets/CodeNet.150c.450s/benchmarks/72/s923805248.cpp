#include <iostream>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char raw;
    while ((raw = cin.get()) != '\n') {
        char capital = toupper(raw);
        char small = tolower(raw);
        if (raw == capital) {
            cout << small;
        } else {
            cout << capital;
        }
    }
    cout << endl;

    return 0;
}