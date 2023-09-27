#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int counts[26];

int
main(int argc, const char *argv[])
{
    string sentence;
    while (cin >> sentence) {
        for (auto &e : sentence) {
            if (islower(e)) counts[e-'a']++;
            else if (isupper(e)) counts[e-'A']++;
        }
    }
    for (int i = 0; i < 26; ++i) {
        printf("%c : %d\n", 'a'+i, counts[i]);
    }

    return 0;
}