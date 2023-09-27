#include <iostream>
#include <string>
using namespace std;

string replace(string str, int begin, int end, string replacedContents) {
    str.replace(begin, (end - begin) + 1, replacedContents);
    return str;
}

string reverse(string str, int begin, int end) {
    for (int i = begin, j = end; i < j; i++, j--) {
        swap(str[i], str[j]);
    }
    return str;
}

string print(string str, int begin, int end) {
    cout << str.substr(begin, (end - begin) + 1) << endl;
    return str;
}

int main(void){
    string str, order, replacedContents;
    int orderNumber, begin, end;
    cin >> str >> orderNumber;
    for (int i = 0; i < orderNumber; i++) {
        cin >> order >> begin >> end;
        if (order == "replace") {
            cin >> replacedContents;
            str = replace(str, begin, end, replacedContents);
        } else if (order == "reverse") {
            str = reverse(str, begin, end);
        } else if (order == "print") {
            str = print(str, begin, end);
        }
    }
    return 0;
}