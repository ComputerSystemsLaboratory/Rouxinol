#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    
    while(cin >> str && str != "0") {
        unsigned long sum = 0;
        for(auto c : str) sum += c - '0';
        cout << sum << '\n';
    }
    
    return 0;
}
