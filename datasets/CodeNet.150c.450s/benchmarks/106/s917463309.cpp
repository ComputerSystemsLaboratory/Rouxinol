#include <iostream>

using namespace std;
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        return 0;
    }

    int count = 0;
    for (int x=a; x <= b; x++) {
        if ((c % x)==0) {
            count += 1;
        }
    }

    cout << count << endl;
    return 0;
}