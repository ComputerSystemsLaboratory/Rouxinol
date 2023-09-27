#include<iostream>
using namespace std;

int main(){
    int a,b,c,count;
    cin >> a >> b >> c;
    count = 0;
    for (int x = a; x <= b; x++) {
        if ((c % x) == 0) {
            count += 1;
        }
    }
    cout << count <<  endl;
    
    return 0;
}