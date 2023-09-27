#include <iostream>
#include <string.h>
using namespace std;

int char2int(char ch) {
    if (ch == 'A') return 1;
    if (ch == 'C') return 2;
    if (ch == 'G') return 3;
    if (ch == 'T') return 4;
    return 0;
}

int string2hash(char str[]) {
    int length = strlen(str);
    int sum = 0;
    int phase = 1;
    for (int i = 0; i < length; ++i) {
        sum += phase * char2int(str[i]);
        phase *= 5;
    }
    return sum;
}

int find(char str[], int dict[]) {
    int hash = string2hash(str);
    if (dict[hash] == 1) return 1;
    else return 0;
}

void insert(char str[], int dict[]) {
    int hash = string2hash(str);
    if (dict[hash] == 0) dict[hash] = 1;
}

int dict[16777216] = {0};

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        char command[12];
        char str[12];
        cin >> command >> str;
        if (command[0] == 'i') {
            insert(str, dict);
        } else {
            if (find(str, dict) == 1) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}