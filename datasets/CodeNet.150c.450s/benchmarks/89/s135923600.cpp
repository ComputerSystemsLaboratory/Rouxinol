#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char *argv[])
{
    auto prime = [](int a){
        if(a <= 1) return false;
        for(int i = 2; i * i <= a; i++){
            if((a % i) == 0) return false;
        }
        return true;
    };
    for(;;) {
        int a, d, n;
        cin >> a >> d >> n;
        if(a == 0) break;
        for(;;) {
            while(!prime(a)) {
                a += d;
            }
            n--;
            if(n == 0) break;
            a += d;
        }
        cout << a << endl;
    }
    return 0;
}
