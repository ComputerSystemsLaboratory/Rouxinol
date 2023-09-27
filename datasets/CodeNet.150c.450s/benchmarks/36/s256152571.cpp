#include <iostream>

using namespace std;

int main()
{
    int lub;
    int d;
    long long area;

    while (cin >> d) {
        lub = 600 - d;
        area = 0;
        for (int i = d; i <= lub; i += d) 
            area += ((i * i) * d);
        cout << area << endl;
    }

    return 0;
}