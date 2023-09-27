#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    a=b=c=0;
    cin >> a;
    cin >> b;
    cin >> c;
    if ((a < b) && (b < c)) {

            cout << "Yes" << endl;

    }

    else{
        cout << "No" << endl;
    }
}