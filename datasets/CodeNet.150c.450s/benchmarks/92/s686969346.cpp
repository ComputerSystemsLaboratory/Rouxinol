#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(const string &s, char delim) {
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        if (!item.empty()) {
            elems.push_back(item);
        }
    }
    return elems;
}

int digits(int num) {
    if (num < 10) return 1;
    int count = 1;
    num = num / 10;
    while(num != 0) {
        count++;
        num = num / 10;
    }
    return count;
}

int main() {

    string str;
    while(getline(cin, str)) {
        vector<string> splited = split(str, ' ');
        int a = stoi(splited[0].c_str());
        int b = stoi(splited[1].c_str());
        cout <<  to_string(digits(a + b)) << endl;
    }

    return 0;
}