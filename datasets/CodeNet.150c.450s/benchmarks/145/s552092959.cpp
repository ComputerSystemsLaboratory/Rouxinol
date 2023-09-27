#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, int> dict;

    string mode, longest;
    while (true) {
        char buf[48];
        if (scanf("%s", buf) == EOF)
            break;

        string word(buf);
        ++dict[word];

        if (dict[mode] < dict[word])
            mode = word;

        if (longest.length() < word.length())
            longest = word;
    }

    
    printf("%s %s\n", mode.c_str(), longest.c_str());
    return 0;
}