#include<iostream>
#include<vector>
using namespace std;
const int A = 9310;
const int B = 350;
const int N = 215;
const int NN = 1000010;
#define REP(i, j) for(int i = 0; i < j; i++)

vector<bool> prime(NN, true);

void makePrime(){
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i * i <= NN; i++){
        if(!prime[i]) continue;
        for(int j = i + i; j < NN; j += i) prime[j] = false;
    }
}

int cal(int a, int b, int n){
    int cnt = 0;
    for(int i = a; ; i += b){
        if(prime[i]) cnt++;
        if(cnt == n) return i;
    }
}

int main(){
    makePrime();
    int a, b, n;
    while(cin >>a >>b >>n && a) cout <<cal(a, b, n) <<endl;
    return 0;
}