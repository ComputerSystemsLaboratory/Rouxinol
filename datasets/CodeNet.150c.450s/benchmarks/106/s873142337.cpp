#include<iostream>
using namespace std;

int main () {
    int x, y, z, count;
    cin >> x >> y >> z;
    for(;x <= y;x++){
        if(z % x == 0)
            count++;
    }
    cout << count << endl;
    return 0;
}