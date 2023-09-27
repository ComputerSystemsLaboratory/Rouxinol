#include <iostream>
#include <map>

using namespace std;

map<int, int> mp;

void factorization(int n){
    
    for (int i = 2; i*i <= n; i++){
        if (n % i) continue;
        
        int count = 0;
        
        while (n % i == 0){
            count++;
            n /= i;
        }
        mp[i] = count;
    }
    
    // is n is a prime number
    if (n != 1) mp[n]++;
}

int main(){
    int n;
    cin >> n;
    
    factorization(n);
    
    cout << n << ":";
    for (auto p : mp){
        
        for (int i = 0; i < p.second; i++){
            cout <<  " " << p.first;
        }
    }
    cout << endl;
}
