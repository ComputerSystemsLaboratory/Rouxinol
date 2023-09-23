#include<iostream>
using namespace std;
#include<string>
int main()
{
    string a;
    getline(cin, a);
    for (unsigned i = 0; i < a.length(); i++) {
        if (islower(a[i]))
            a[i] = toupper(a[i]);
        else
            a[i] = tolower(a[i]);
    }
    cout << a << endl;
    return 0;
}