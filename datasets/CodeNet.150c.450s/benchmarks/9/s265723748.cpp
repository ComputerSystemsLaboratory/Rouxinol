#include <iostream>
#include <string>
using namespace std;

int main () {
    while (true) {
        string mountain;
        cin >> mountain;
        if ( mountain == "-" ) break;

        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            int h;
            cin >> h;
            string head = mountain.substr(0, h);
            mountain.erase(0, h);
            mountain += head;
        }
        cout << mountain << endl;
    }
    return 0;
}