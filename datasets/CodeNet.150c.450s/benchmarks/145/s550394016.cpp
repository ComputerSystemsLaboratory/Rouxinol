#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    string word, largestWord, mostFrequentWord;
    int maxLength = 0, mode = 0;    
    map<string, int> words;

    while (cin >> word) {
        if (words.count(word)) {
            words[word]++;
            if (words[word] > mode) { 
                mode = words[word];
            }
        }
        else {
            words[word] = 1;            
        }

        if (word.size() > maxLength) {
            maxLength = word.size();
            largestWord = word;
        }
    }
    
    for (map<string, int>::iterator it = words.begin(); it != words.end(); ++it) {
        if (it->second == mode) {
            mostFrequentWord = it->first;
        }
    }

    cout << mostFrequentWord << " " << largestWord << endl;
    return 0;
}