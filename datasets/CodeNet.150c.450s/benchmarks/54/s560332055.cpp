#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string word;
    char lower[1000] = {0};
    cin >> word;
    for (auto i = 0; i < word.size(); ++i) lower[i] = tolower(word[i]);
    lower[word.size()] = '\0';
    string word_lower(lower);

    int count = 0;
    string each_t;
    while (cin >> each_t) {
        if (each_t == "END_OF_TEXT") break;
        for (auto i = 0; i < each_t.size(); ++i) lower[i] = tolower(each_t[i]);
        lower[each_t.size()] = '\0';
        string each_t_lower(lower);
        if (word_lower == each_t_lower) ++count;
    }
    cout << count << endl;

    return 0;
}