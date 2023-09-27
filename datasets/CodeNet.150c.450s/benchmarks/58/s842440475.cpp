#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

int main(void){
    stack<int> s;
    int tmp;
    char input[80];
    char *endptr;
    
    while(cin >> input){
        tmp = strtol(input , &endptr,10);
        
        switch(*endptr){
            case '+':
                tmp = s.top(); s.pop();
                tmp += s.top(); s.pop();
                s.push(tmp);
                break;
            case '-':
                tmp = s.top(); s.pop();
                tmp = s.top() - tmp; s.pop();
                s.push(tmp);
                break;
            case '*':
                tmp = s.top(); s.pop();
                tmp *= s.top(); s.pop();
                s.push(tmp);
                break;
            default:
                s.push(tmp);
                break;
        }
    }
    cout << s.top() << endl;
    
    return 0;
}