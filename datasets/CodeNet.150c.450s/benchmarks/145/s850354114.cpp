#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

typedef map<string, int> freqmap;

freqmap fm;

int main() {
    string word;
    while (cin >> word) {
        fm[word]++;
    }

    string most_used;
    int most_used_i = 0;
    for (freqmap::iterator i = fm.begin(); i!= fm.end(); i++) {
        if (most_used_i < (*i).second) {
            most_used_i = (*i).second;
            most_used = (*i).first;
        }
    }
    cout << most_used << ' ';
    
    string max_length;
    int max_length_i = 0;
    for (freqmap::iterator j = fm.begin(); j != fm.end(); j++) {
        if (max_length_i < (*j).first.length()) {
            max_length = (*j).first;
            max_length_i = (*j).first.length();
        }
    }
    cout << max_length << endl;
    return 0;
}