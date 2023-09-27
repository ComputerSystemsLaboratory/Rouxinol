#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    stack<uint> carbarn;
    carbarn.push(0);            // dummy
    uint input;

    while(cin >> input)
    {
        if(input == 0)
        {
            cout << carbarn.top() << endl;
            carbarn.pop();
        }
        else
        {
            carbarn.push(input);
        }
    }
}