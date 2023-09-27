#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string str;
    cin >> str;

    int op_num;
    cin >> op_num;

    string op;
    int first, last;
    while (op_num--) {
        cin >> op >> first >> last;
        int char_num = last - first + 1;

        if (op == "print") {
            cout << str.substr(first, char_num) << endl;
        } else if (op == "reverse") {
            string reversed;
            reversed.resize(char_num);
            for (int i = 0; i < char_num; i++) {
                reversed.at(i) = str.at(last - i);
            }
            str.replace(first, char_num, reversed);
        } else if (op == "replace") {
            string p;
            cin >> p;
            str.replace(first, char_num, p);
        } else {
            cout << "ERROR!" << endl;
        }
    }

    return 0;
}