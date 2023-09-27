#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main (void) {
    vector<string> words;
    vector<int> count;
    int N = 0;
    while (1) {
        string w;
        cin >> w;
        if (cin.eof()) break;
        int index = 0;
        while (index < N && words[index] != w) index++;
        if (index == N) {
            words.push_back(w);
            count.push_back(1);
            N++;
        } else {
            count[index]++;
        }
    }
    string frequent;
    string longest;
    int freq = 0, size = 0, s;
    for (int i = 0; i < N; i++) {
        if (count[i] > freq) {
            freq = count[i];
            frequent = words[i];
        }
        s = words[i].size();
        if (s > size) {
            size = s;
            longest = words[i];
        }
    }
    cout << frequent << ' ' << longest << endl;
    return 0;
}