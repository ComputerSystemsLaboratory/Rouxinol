#include <bits/stdc++.h>
using namespace std;

vector <int> v;

void PrimeFac(int n){
    while(n%2==0){
        v.push_back(2);
        n/=2;
    }

    int ans=sqrt(n);
    for(int i=3; i<=ans; i+=2){
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }

    if(n>2) v.push_back(n);
}

int main(){
    int n;
    scanf("%d",&n);
    PrimeFac(n);

    int len=v.size();
    printf("%d: %d",n,v[0]);
    for(int i=1; i<len; i++){
        printf(" %d",v[i]);
    }
    printf("\n");

    return 0;
}

