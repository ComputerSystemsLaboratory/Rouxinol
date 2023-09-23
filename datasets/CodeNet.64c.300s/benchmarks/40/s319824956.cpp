#include <iostream>
using namespace std;

int main() {
    string s;
    int i;

    getline(cin, s);

    for(i=0;i<s.size();i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }else{
            s[i]=toupper(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}
