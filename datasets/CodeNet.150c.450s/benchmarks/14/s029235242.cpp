#include<iostream>
using namespace std;

bool inc(int n){
    while (n != 0){
        if (n % 10 == 3) return true;
        n /= 10;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    int i;
    for (i = 3; i <= n; i++) if (i % 3 == 0 || inc(i)) cout << " " << i;
    cout << endl;
}