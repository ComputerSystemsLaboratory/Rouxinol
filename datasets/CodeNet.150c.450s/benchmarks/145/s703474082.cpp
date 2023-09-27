#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, int> words;
    string word;
    while (cin >> word) {
        words[word]++;
    }
    pair<string, int> mode = make_pair("", 0);
    string maxLength = "";
    for (map<string, int>::iterator it = words.begin(); it != words.end(); it++) {
        if (it->second > mode.second) {
            mode = *it;
        }
        if (it->first.length() > maxLength.length()) {
            maxLength = it->first;
        }
    }
    cout << mode.first << " " << maxLength << endl;
}