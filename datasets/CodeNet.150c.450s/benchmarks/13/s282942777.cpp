#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string str;
    cin >> str;
    string s = str + str;
    string p;
    cin >> p;
    
    if (s.find(p) != string::npos) cout << "Yes" << endl;
    else cout << "No" << endl;
}