#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int a;
    int b;
    int sum;
    while(cin >> a >> b)
    {
        sum = a + b;
        string sum = to_string(a + b);
        cout << sum.length() << endl;
    }
}