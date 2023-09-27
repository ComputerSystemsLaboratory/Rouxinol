#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <math.h>
#include <map>

using namespace std;

vector<string> split(string source, string pattern) {
    unsigned i, base = 0;
    vector<string> ret;
    string buff;

    for(i = 0; i < source.size(); i++) {
        if(source.substr(i, pattern.size()) == pattern) {
            ret.push_back(buff);
            i += pattern.size() - 1;
            buff.clear();
        } else {
            buff += source[i];
        }
    }
    ret.push_back(buff);
    return ret;
}

int main(void) {
    string w, big_occ, big_size;
    int ml = 0, occ = 0;
    map<string, int> m;

    getline(cin, w);

    vector<string> sp = split(w, " ");

    for(int i = 0; i < (int) sp.size(); i++) {
        m[sp[i]] += 1;
    }

    for(map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
        if(it->second > occ) {
            big_occ = it->first;
            occ = it->second;
        }
        if(it->first.size() >= ml) {
            big_size = it->first;
            ml = it->first.size();
        }
    }

    cout << big_occ << " " << big_size << endl;

    return 0;
}