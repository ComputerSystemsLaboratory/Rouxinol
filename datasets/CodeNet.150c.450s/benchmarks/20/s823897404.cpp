#include <iostream>

#define OK 0;
#define START 0;
using namespace std;


int main(void) {
    unsigned int S = START;
    unsigned int h = START;
    unsigned int m = START;
    unsigned int s = START;

    //scanf
    cin >> S;

    h = S /3600;
    m = (S % 3600) / 60;
    s = S - (h * 3600 + m * 60);
    //printf
    cout << h << ":" << m << ":" << s << endl;

    return OK;
}