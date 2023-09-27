#include <bits/stdc++.h>

using namespace std;

/////

int main(){
    bool fact[200000];
    fill(fact, fact+200000, true);
    fact[0] = fact[1] = false;
    for(int i=2;i<100000;i++){
        if(!fact[i])continue;
        for(int j=2;i*j<200000;j++){
            fact[i*j] = false;
        }
    }
    set<int> prime;
    for(int i=0;i<200000;i++){
        if(fact[i])prime.insert(i);   
    }
    int n;
    cin >> n;
    cout << n << ":";
    for(auto&& i:prime){
        if(n<=1)break;
        while( n % i == 0 ){
            cout << " " << i;
            n /= i;
        }
    }
    if(n>1) cout << " " << n ;
    cout << endl;
}
