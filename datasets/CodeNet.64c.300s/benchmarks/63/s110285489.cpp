#include<iostream>
#include <algorithm>
using namespace std;

bool p[1000100];

int main(){
    long long a, b;
    while(cin >> a >> b){
        cout << __gcd(a, b) << " " << a*b/__gcd(a, b) << endl;
    }
}