#include <bits/stdc++.h>
using namespace std;

char exchangeLowerUpper(char);

int main() {
    string oldstr, newstr;
    getline(cin, oldstr);
    // cin >> oldstr;
    
    for (long unsigned int i = 0; i < oldstr.size(); i++) {
        newstr.push_back(exchangeLowerUpper(oldstr[i]));
    }

    // cout << "oldsize = " << oldstr.size() << endl;
    // cout << "newsize = " << newstr.size() << endl;

    // return 0;

    cout << newstr << endl;

    return 0;
}

char exchangeLowerUpper(char oldc) {
    char newc = oldc;
    
    if ('a' <= oldc && oldc <= 'z') {
        newc = oldc + 'A' - 'a';
    } else if ('A' <= oldc && oldc  <= 'Z') {
        newc = oldc + 'a' - 'A';
    }
    
    return newc;
}
