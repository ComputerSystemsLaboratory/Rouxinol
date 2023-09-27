#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int getKey(int x,vector<ll> &arr){
    return arr.at(x-1);
}

int getLeft(int x,vector<ll> &arr){
    return arr.at(2*x-1);
}

int getRight(int x,vector<ll> &arr){
    return arr.at(2*x);
}

int getParent(int x,vector<ll> &arr){
    int one_start = x/2;
    return arr.at(one_start - 1);
}


int main(){
    int n;
    cin >> n;
    vector<ll> heap(n);
    for(int i=0;i<n;i++) cin >> heap.at(i);
    for(int i=0;i<n;i++){
        int k = i+1;
        printf("node %d: key = %d, ",k,getKey(k,heap));
        if(k / 2 >= 1){
            printf("parent key = %d, ",getParent(k,heap));
        }
        if(k * 2 <= n){
            printf("left key = %d, ",getLeft(k,heap));
        }
        if(k * 2 + 1 <= n){
            printf("right key = %d, ",getRight(k,heap));
        }
        cout << endl;
    }
}
