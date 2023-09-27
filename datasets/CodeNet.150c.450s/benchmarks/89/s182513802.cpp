#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<bool> prime(1000001, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i < sqrt(1000001); i++){
        if (prime[i]){
            for (int j = i * 2; j < 1000001; j += i){
                prime[j] = false;
            }
        }
    }
    while(1){
        int a, d, n;
        cin >> a >> d >> n;
        if (n == 0) break;

        int cnt = 0;
        while (1){
            if (cnt == n - 1 && prime[a]){
                cout << a << endl;
                break;
            }
            if (prime[a]) cnt++;
            a += d;
        }
    }
}
