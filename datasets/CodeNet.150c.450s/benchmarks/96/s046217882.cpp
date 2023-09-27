#include <iostream>
using namespace std;
int main(void){
    string code[] = {
        "", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz",
    };
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string input;
        cin >> input;
        int len = input.length();
        int index = 0, j = 0;
        while (j < len) {
            char c = input[j];
            if (c == '0') {
                ++j;
                continue;
            }
            while (++j < len && c == input[j]) ++index;
            string button = code[c - '0'];
            cout << button[index % button.length()];
            index = 0;
        }
        cout << endl;
    }
    return 0;
}