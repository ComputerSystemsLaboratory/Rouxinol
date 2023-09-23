#include <iostream>
using namespace std;

int main(void) {
    int input;
    int cnt = 1;
    while(true) {
        cin >> input;
        if(input != 0)
            cout << "Case " << cnt++ << ": " << input << endl;
        else
            break;
    }

    return 0;
}