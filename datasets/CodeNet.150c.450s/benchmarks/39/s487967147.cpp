#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int len,wid,per,area;
    cin >> len;
    cin >> wid;
    per = len*2 + wid*2;
    area = len*wid;
    cout << area<< " " << per << endl;
    return 0;
}