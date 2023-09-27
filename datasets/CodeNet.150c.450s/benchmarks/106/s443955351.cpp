#include <iostream>

using namespace std;

int main()
{ 
    int a, b, c;
    int count = 0;

    do {
        cin >> a >> b >> c;
    } while ((a < 1 && a > 10000) || (b < 1 && b > 10000) || (c < 1 && c > 10000) ||
	     (a > b));

    for (int i = a; i <= b; i++) {       
         if (c % i == 0) {
	     count++;
         }
    }
     
    cout << count << endl;

    return (0);
}   