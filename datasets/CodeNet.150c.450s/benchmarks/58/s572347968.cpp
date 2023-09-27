#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    vector<int> stack;

    string line;
    getline(cin, line);
    istringstream iss(line);

    string in;
    while(iss >> in) {
        if (in == "+") {
            int b = stack.back();
            stack.pop_back();

            int a = stack.back();
            stack.pop_back();

            stack.push_back(a+b);
        } else if (in == "-") {
            int b = stack.back();
            stack.pop_back();

            int a = stack.back();
            stack.pop_back();

            stack.push_back(a-b);
        } else if (in == "*") {
            int b = stack.back();
            stack.pop_back();

            int a = stack.back();
            stack.pop_back();

            stack.push_back(a*b);
        } else {
            stack.push_back(stoi(in));
        }
    }

    cout << stack.back() << endl;

    return 0;
}