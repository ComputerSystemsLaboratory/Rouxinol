#include<bits/stdc++.h>
using namespace std;

bool isprime(long long int val) {
    if (val <= 1)return false;
    for (long long int i = 2; i*i <= val; i++) {
        if (val%i == 0LL)return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int k=n;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            n/=i;
            v.push_back(i);
        }
        if(isprime(n)){
            v.push_back(n);
            break;
        }
    }
    cout<<k<<":";
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    cout<<endl;
}
