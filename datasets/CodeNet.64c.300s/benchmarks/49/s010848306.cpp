#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int in1, in2;
    int a[200], b[200];
    int count = 0;
    while(cin >> in1 >> in2) {
        a[count] = in1;
        b[count] = in2;
        count++;
    }

    for(int i = 0; i < count; i++) cout << (int)log10(a[i]+b[i])+1 << endl;
    
    return 0;
}