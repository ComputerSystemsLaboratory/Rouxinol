#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

typedef map<string, int> M;
typedef M::value_type MV;
int main()
{
    M word_counts;
    string max_letters = "";

    for (string s; cin >> s;) {
        if (s.size() > max_letters.size())
            max_letters = s;
        word_counts[s]++;
    }
    cout << (*max_element(word_counts.begin(), word_counts.end(),
                          [](MV &a, MV &b){return a.second < b.second;})).first
        << " " << max_letters << endl;

    return 0;
}