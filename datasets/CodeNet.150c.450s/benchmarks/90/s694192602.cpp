#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<int, int> freqmap;
vector<int> most_freqs;

int main() {
    int n;
    while (cin >> n) {
        freqmap[n]++;
    }

    int freq = 0;
    for (map<int, int>::iterator i = freqmap.begin(); i != freqmap.end(); i++) {
        freq = freq > (*i).second ? freq : (*i).second;
    }

    for (map<int, int>::iterator i = freqmap.begin(); i != freqmap.end(); i++) {
        if ( (*i).second == freq ) {
            most_freqs.push_back( (*i).first );
        }
    }

    sort(most_freqs.begin(), most_freqs.end());

    for (vector<int>::iterator i = most_freqs.begin(); i != most_freqs.end(); i++) {
        cout << (*i) << endl;
    }

    return 0;
}