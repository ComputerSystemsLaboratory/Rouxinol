#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    while(cin >> str) {
        for(int i = str.size(); i >= 0; i--)
            cout << str.substr(i, 1);
        cout << endl;
    }
}