#include<iostream>
using namespace std;

bool prime[1000000];//false -> prime
int main(){
    int n = 1000000;

    prime[0] = prime[1] = true;
    for(int i = 2;i*i <= n;i++){

        if(prime[i] == false){
            for(int j = i*i;j <= n;j+=i){
                prime[j] = true;
            }
        }
    }
    while(cin>>n){
        int cnt = 0;
        for(int i = 0;i <= n;i++){
            if(prime[i] == false)cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}