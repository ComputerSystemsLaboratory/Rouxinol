#include <iostream>

using namespace std;

int main(const int argc, const char *argv[])
{
    int64_t input;
    int64_t h, m, s;
    cin >> input;
    if (input < 0 || input >= 86400) {
        return 1;
    }
    h = input / (60 * 60);
    input = input % (60 * 60);
    m = input / 60;
    s = input % 60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}