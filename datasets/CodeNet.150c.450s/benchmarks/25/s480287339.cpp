#include <iostream>
#include <string>

using namespace std;

struct ALF {
    string  s;
    int     cnt;
}
alfa[26]
{
    { "a", 0 },
    { "b", 0 },
    { "c", 0 },
    { "d", 0 },
    { "e", 0 },
    { "f", 0 },
    { "g", 0 },
    { "h", 0 },
    { "i", 0 },
    { "j", 0 },
    { "k", 0 },
    { "l", 0 },
    { "m", 0 },
    { "n", 0 },
    { "o", 0 },
    { "p", 0 },
    { "q", 0 },
    { "r", 0 },
    { "s", 0 },
    { "t", 0 },
    { "u", 0 },
    { "v", 0 },
    { "w", 0 },
    { "x", 0 },
    { "y", 0 },
    { "z", 0 },
};

int main() {
    string str;

    while(getline(cin, str)){
        for (int i = 0; i < str.size(); i++) {
            if(str[i] >= 0x41 && str[i] <= 0x5a){
                alfa[str[i] - 'A'].cnt++;
            }
            else if (str[i] >= 0x61 && str[i] <= 0x7a) {
                alfa[str[i] - 'a'].cnt++;
            }
        } 
    }

    for (int j = 0; j < 26; j++) {
        cout << alfa[j].s << " : " << alfa[j].cnt << endl;
    }

    return 0;
}