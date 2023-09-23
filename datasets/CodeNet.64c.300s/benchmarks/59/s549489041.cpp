#include <iostream>
#include <cmath>
using namespace std;

int PrimeNumber(int n){
    if(n == 2)
        return 1;
    else if(n < 2 || n % 2 == 0)
        return 0;
    else{
        int i = 3;
        while(i <= sqrt(n)){
            if(n % i == 0)
                return 0;
            i = i + 2;
        }
        return 1;
    }
}

int main(void){
    int N, n;
    int cnt = 0;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> n;
        cnt += PrimeNumber(n);
    }
    cout << cnt << endl;
    return 0;
}