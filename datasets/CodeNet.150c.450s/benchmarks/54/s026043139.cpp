#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

string to_word_lower(string tgt) {
    for (int i=0; i<tgt.size(); i++) {
        tgt[i] = tolower(tgt[i]);
    }
    return tgt;
}

int main() {
    string sample;
    cin >> sample;
    sample = to_word_lower(sample);

    int count = 0;
    while (true) {
        string tgt;
        cin >> tgt;
        if ( tgt == "END_OF_TEXT" ) break;
        tgt = to_word_lower(tgt);
        if ( tgt == sample ) count++;
    }
    cout << count << endl;
    return 0;
}