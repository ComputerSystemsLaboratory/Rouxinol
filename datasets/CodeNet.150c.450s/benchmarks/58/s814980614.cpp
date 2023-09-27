#include <iostream>
#include <stack>
#include <sstream>
#include <stdlib.h>
#include <cstdio>
#include <typeinfo>

typedef long long int ll;
using namespace std;

int main()
{
    stack<int> S;
    string word;

    while (cin >> word)
    {
        int front, back, num;
        string result;

        if (word == "+")
        {
            back = S.top();
            S.pop();
            front = S.top();
            S.pop();
            S.push(front + back);
        }
        else if (word == "-")
        {
            back = S.top();
            S.pop();
            front = S.top();
            S.pop();
            S.push(front - back);
        }
        else if (word == "*")
        {
            back = S.top();
            S.pop();
            front = S.top();
            S.pop();
            S.push(front * back);
        }
        else
        {
            num = atoi(word.c_str());
            S.push(num);
        }
    }
    cout << S.top() << endl;
}
