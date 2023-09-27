#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

bool isPrime(int n);

int n;

int main(){
    scanf("%d", &n);
    printf("%d:",n);
    vector<int> v;

    if(isPrime(n)){
        printf(" %d\n",n);
        return 0;
    }

    while(n%2 == 0){
        v.push_back(2);
        n /= 2;
    }
    for(int i = 3; i <= n; i += 2){
        while(n%i == 0){
            v.push_back(i);
            n/=i;
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << " " << v[i];
    }
    cout << endl;

    return 0;
}

bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;
    for(int i = 3; i*i <= n; i+=2){
        if(n%i == 0) return false;
    }
    return true;
}
