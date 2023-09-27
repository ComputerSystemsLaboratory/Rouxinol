#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char op;
    cin >> a >> op >> b;
    while (op != '?')
    {
        int answer;
        switch (op) {
            case '+':
                answer = a + b;
                break;
            case '-':
                answer = a - b;
                break;
            case '*':
                answer = a * b;
                break;
            case '/':
                answer = a / b;
                break;
        }
        cout << answer << endl;
        cin >> a >> op >> b;
    }

    return 0;
}