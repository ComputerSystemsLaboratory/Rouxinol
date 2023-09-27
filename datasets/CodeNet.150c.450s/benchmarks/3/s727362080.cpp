#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    string str, tmp, command, p;
    int q, a, b;
    cin >> str >> q;
    for (int i=0; i<q; ++i){
        cin >> command;
        // parse
        // print
        if (command[0] == 'p'){
            cin >> a >> b;
            for (int j=0; j<b-a+1; ++j){
                cout << str[a+j];
            }
            cout << endl;
        }
        // replace
        else if (command[0] == 'r' && command[1] == 'e' && command[2] == 'p'){
            cin >> a >> b >> p;
            for (int j=0; j<b-a+1; ++j){
                str[a+j] = p[j];
            }
        }
        // reverse
        else if (command[0] == 'r' && command[1] == 'e' && command[2] == 'v'){
            cin >> a >> b;
            tmp = str;
            for (int j=0; j<b-a+1; ++j){
                str[a+j] = tmp[b-j];
            }
        }
    }
    return 0;
}

