#include<iostream>
using namespace std;

#define MAX 100000
typedef long long llong;

int n,k;
llong T[MAX];

int check(int P){
    int j=0;
    for(int i=0;i<k;i++){
        llong sum=0;
        while(sum+T[j]<=P){
            sum += T[j];
            j++;
            if(j==n)return n;
        }
    }
    return j;
}

int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> T[i];

    llong left=0,right=100000*10000,mid;
    while(right-left>1){
        mid = (left+right)/2;
        if(check(mid)>=n)right=mid;
        else left=mid;
    }
    cout << right << endl;

    return 0;
}

