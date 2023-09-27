#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
        map<string, int> dic;
        int n;
        string op, word;
        cin >> n;
        while (n-->0) {
                cin >> op >> word;
                switch (op[0]) {
                case 'i':
                        dic[word] = 1;
                        break;
                case 'f':
                        if (dic[word]) {
                                cout << "yes" << endl;
                        } else {
                                cout << "no" << endl;
                        }
                }
        }
        return 0;
}