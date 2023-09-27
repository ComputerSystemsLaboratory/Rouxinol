#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

stack<int> s;
int ac;

int main(void) {
    while(~scanf("%d", &ac)) {
        if(ac == 0) {
            cout << s.top() << endl;
            s.pop();
        } else {
            s.push(ac);
        }
    }
    return 0;
}