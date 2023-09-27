#include <iostream>
#include <string>
#include <stdlib.h>
#include <stack>

using namespace std;

int main () {

        string str, in;
        while (getline(cin, in)) {
                str += in;
        }

        stack<long> stc;
        for (int i = 0; i < str.size();) {
                switch (str[i]) {
                case '+' : {
                        long a = stc.top();
                        stc.pop();
                        long b = stc.top();
                        stc.pop();
                        stc.push(b + a);
                        i += 2;
                        break;
                }
                case '-' : {
                        long a = stc.top();
                        stc.pop();
                        long b = stc.top();
                        stc.pop();
                        stc.push(b - a);
                        i += 2;
                        break;
                }
                case '*' : {
                        long a = stc.top();
                        stc.pop();
                        long b = stc.top();
                        stc.pop();
                        stc.push(b * a);
                        i += 2;
                        break;
                }
                default :
                        int pos = str.find(" ", i + 1);
                        long psnu = atol((str.substr(i, pos - i)).c_str());
                        stc.push(psnu);
                        i = pos + 1;
                }
        }
        cout << stc.top() << endl;

        return 0;

}