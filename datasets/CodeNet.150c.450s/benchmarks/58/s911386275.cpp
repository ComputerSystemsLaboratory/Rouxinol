#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Stack {
    int pointer;
    int* data;
    Stack(int size) {
        this->data = new int[size];
        this->pointer = -1;
    }
    void push(int val) {
        this->pointer++;
        this->data[pointer] = val;
    }
    int pop() {
        if (pointer < 0) { return -1; }
        int val = this->data[pointer];
        this->pointer--;
        return val;
    }
};

bool isInteger(const string& str) {
    if (str.find_first_not_of("0123456789\t") != string::npos) {
        return false;
    }
    return true;
}

void split_into_vec(const string& buf, vector<string>& str) {
    stringstream ss(buf);
    string tmp;
    char delim = ' ';
    while (getline(ss, tmp, delim)) {
        str.push_back(tmp);
    }
}

int main() {
    Stack stack(100);

    ios::sync_with_stdio(false);
    string buf;
    getline(cin, buf);

    vector<string> str;
    split_into_vec(buf, str);

    for (auto& elm : str) {
        if (isInteger(elm)) {
            auto val = atoi(elm.c_str());
            stack.push(val);
        } else {
            auto op = elm.c_str()[0];
            int v2 = stack.pop();
            int v1 = stack.pop();
            int res;
            if (op == '*') {
                res = v1 * v2;
            } else if (op == '+') {
                res = v1 + v2;
            } else if (op == '-') {
                res = v1 - v2;
            }
            stack.push(res);
        }
    }
    cout << stack.pop() << endl;

    return 0;
}