#include<iostream>
using namespace std;

static const int MAX = 1000000;

void make_prime(bool *n){
    for (int i=2; i<1000; i++) {
        if (!n[i]){
            for(int j = i*i; j < MAX; j+=i){
                n[j] = true;
            }
        }
    }
}

int main(){
    bool num[MAX] = {false};
    make_prime(num);
    int n;
    while(cin >>n){
        int ans = 0;
        for(int i=2; i<=n; i++){
            if(!num[i]){ans++;}
        }
        cout <<ans<<endl;
    }
    return 0;
}