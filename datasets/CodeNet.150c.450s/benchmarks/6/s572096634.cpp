#include <iostream>

#define OK 0;
#define INIT 0;
using namespace std;


int main(void) {
    unsigned int a = INIT;
    unsigned int b = INIT;
    unsigned int c = INIT;

    //scanf
    cin >> a >> b >> c;

    if ((a < b) && (b < c)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;

    }

    return OK;
}