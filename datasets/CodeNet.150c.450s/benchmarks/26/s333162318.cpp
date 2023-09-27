#include <iostream>
using namespace std;

int main()
{
    int a,b;
    string ope = "==";
    cin >> a >> b;
    if(a > b)
        ope = ">";
    else if(a < b)
        ope = "<";

    cout << "a " <<ope << " b" << endl;
}