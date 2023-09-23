#include<iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int b = a / 60;
    int m = b % 60;
    int h = b / 60;
    int s = a % 60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
   
