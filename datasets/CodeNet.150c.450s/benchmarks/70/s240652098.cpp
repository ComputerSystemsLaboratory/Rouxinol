#include <iostream>
#include <cmath>
using namespace std;

char const* data1[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int data2[] = {3, 6, 0, 3, 5, 1, 3, 6, 2, 4, 0, 2};

int main(void)
{
    int m, d;
    while (cin >> m >> d && m!=0 && d!=0) {
        int a = (data2[m-1] + d-1)%7;
        cout << data1[a] << endl;;
    }
    return 0;
}

