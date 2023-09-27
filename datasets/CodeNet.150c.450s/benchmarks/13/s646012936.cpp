#include <iostream>
#include <string>

using namespace std;

int main() {
    string p,s;
    cin >> p >> s ;

    p += p;
    string::size_type pos = p.find(s);
    if (pos != -1)
        cout << "Yes" <<endl;
    else
        cout << "No" << endl;
     return 0;
}