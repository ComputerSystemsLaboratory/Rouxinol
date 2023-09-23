#include<iostream>
using namespace std;


int main(){
    int a,b,s;
    cin >> a >> b;
    s = a*b; 
    a = 2 * (a + b);
    cout << s << ' ' << a << endl;
    return 0;
}