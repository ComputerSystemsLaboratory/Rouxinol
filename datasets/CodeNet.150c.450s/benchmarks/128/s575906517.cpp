#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    
    cin >> str;
    
    int i = str.size();
    
    reverse(&str[0], &str[i]);

    cout << str << endl;
    
    return 0;
}