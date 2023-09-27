
#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(int x){
    if(x == 2){
        return true;
    }
    if(x == 1 || x % 2 == 0){
        return false;
    }

    for(int i = 3;i < sqrt(x) + 1;i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;

}

int main(){
    int N;
    cin >> N;
    int prime = 0;
    for(int i = 0;i < N;i++){
        int x;
        cin >> x;
        if(isPrime(x)){
            prime++;
        }
    }
    cout << prime << endl;
}

