#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {

    vector<string> words;
    string word; 
    string longest = "";

    while(cin >> word) {
        words.push_back(word);
        if(word.length() > longest.length()) {
                longest = word;
        }
    }

    string freq;
    int frequency = 0;
    for(int i = 0; i < words.size(); i++) {
        int tmp = count(words.begin(), words.end(), words[i]);
        if (tmp > frequency) {
            frequency = tmp;
            freq = words[i];
        }
    }

    cout << freq << " " << longest << endl;

    return 0;
}