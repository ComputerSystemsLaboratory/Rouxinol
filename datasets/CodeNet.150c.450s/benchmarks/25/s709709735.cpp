#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int alphabetCount[26] = {};
    do {
        getline(cin, sentence);
        
        for (unsigned int i = 0; i < sentence.length(); i++) {
            if (sentence[i] >= 0x41 && sentence[i] <= 0x5A) { // 英小文字
                alphabetCount[sentence[i] - 0x41]++;
            }
            else if (sentence[i] >= 0x61 && sentence[i] <= 0x7A) { // 英大文字
                alphabetCount[sentence[i] - 0x61]++;
            }
            else {
            }
        }
    } while (sentence.length() != 0);

    for (int i = 0; i < 26; i++) {
        cout << static_cast<char>('a' + i) << " : " << alphabetCount[i] << endl;
    }
}