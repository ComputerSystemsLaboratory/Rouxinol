#include<iostream>
using namespace std;

int main(){
    int a, b, c, divisor, counter;
    counter = 0;
    cin >> a >> b >> c;
    for(divisor = a; divisor <= b; divisor++){
        if((c % divisor) == 0){ counter++; }
    }
    cout << counter << endl;
    return 0;
}
