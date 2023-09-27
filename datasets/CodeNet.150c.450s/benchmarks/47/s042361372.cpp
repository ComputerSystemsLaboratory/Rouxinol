#include <iostream>
using namespace std;

int check(void);

#define INIT    0
#define NO      1

int main() {

    int W       =INIT;
    int H       =INIT;
    int x       =INIT;
    int y       =INIT;
    int r       =INIT;
    int flag    =INIT;

    //data input
    cin >> W;
    cin >> H;
    cin >> x;
    cin >> y;
    cin >> r;
    
    if (x < r) {
        flag = check();
    }

    if (y < r) {
        flag = check();
    }

    if ((x + r) > W) {
        flag = check();
    }

    if ((y + r) > H) {
        flag = check();
    }

    if (flag == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout <<  "No" << endl;
    }
}

int check(void)
{
    return NO;
}