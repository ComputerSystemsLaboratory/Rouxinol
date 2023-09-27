#include <iostream>
#include <cmath>

using namespace std;

int debt(int a){
    if (a == 0){
        return 100000;
    }
    else{
        float b;
        b = ceil(debt(a-1)*1.05/1000);
        return int(b*1000);
    }
}

int main(){
    int n;
    cin >> n;
    cout << debt(n) << endl;
}