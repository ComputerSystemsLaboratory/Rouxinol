#include <iostream>
#include <string>

using namespace std;

int main(void){
    string line;
    int count[26];
    for (int i = 0; i < 26; i++) {
        count[i] = 0;
    }
    for (; getline(cin, line); ) {
        for (int i = 0; i < line.length(); i++) {
            if (isupper(line[i])) {
                count[line[i] - 'A']++;
            } else if (islower(line[i])) {
                count[line[i] - 'a']++;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << (char)(i+'a') << " : " << count[i] << endl;
    }
    return 0;
}