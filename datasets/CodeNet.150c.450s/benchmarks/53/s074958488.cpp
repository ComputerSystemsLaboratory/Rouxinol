#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<int> factors;
void factorize(int n){
    factors.clear();

    while (n % 2 == 0){
        factors.push_back(2); n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2){
        while (n % i == 0){
            factors.push_back(i); n /= i;
        }
    }

    if (n > 2) factors.push_back(n);

    //factors.erase(unique(factors.begin(), factors.end()), factors.end());
}

int main(){
    int n; cin >> n; factorize(n); cout << n << ':';
    for (int i = 0; i < factors.size(); i++) cout << ' ' << factors[i];
    cout << endl;
    return 0;
}

