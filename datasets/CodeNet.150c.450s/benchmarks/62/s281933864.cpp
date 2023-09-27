#include <iostream>
using namespace std;

#define OK 0
#define INIT 0

void compared(int*, int*);

int main(void) {

    int a   =INIT;
    int b   =INIT;
    int c   =INIT;

    //data input
    cin >> a;
    cin >> b;
    cin >> c;
    
    if (a > b) {
        compared(&a,&b);
    }

    if (a > c) {
        compared(&a,&c);
    }

    if (b > c) {
        compared(&b,&c);
    }
    
    cout << a << " " << b << " " << c << endl;

    return OK;
}

void compared(int* data1, int* data2)
{
    int tmp = INIT;

    tmp     = *data1;
    *data1  = *data2;
    *data2  = tmp;
}