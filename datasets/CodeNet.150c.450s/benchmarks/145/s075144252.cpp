#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> words;
    string word, largestWord, mostFrequentWord;
    int maxLength = 0, mode = 0;    

    while (cin >> word) {
        words[word]++;
    }
    
    for (map<string, int>::iterator it = words.begin(); it != words.end(); ++it) {
        if (it->second > mode) {
            mode = it->second;
            mostFrequentWord = it->first;
        }
        if (it->first.size() > maxLength) {
            maxLength = it->first.size();
            largestWord = it->first;
        }
    }

    cout << mostFrequentWord << " " << largestWord << endl;
    return 0;
}