#include <iostream>

using namespace std;

int main()
{
    int a, b, answer;
    char opera;

    while (true)
    {
        cin >> a >> opera >> b;
        if ('?' == opera) break;
        switch (opera)
        {
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
        default:
            break;
        }
        cout << answer << endl;
    }

}