#include<iostream>
using namespace std;


int main(){
    int koku, suu, ei, ri;
    int sum_a, sum_b;

    cin >> koku >> suu >> ei >> ri;
    sum_a = koku + suu + ei + ri;

    cin >> koku >> suu >> ei >> ri;
    sum_b = koku + suu + ei + ri;

    if (sum_a > sum_b) cout << sum_a << endl;
    else cout << sum_b << endl;


    return 0;
}