#include <bits/stdc++.h>

#define MAX 250

using namespace std;

int n,q;
int n_lst[MAX],q_lst[MAX];

bool bf(int idx,int x){
    if(x == 0) return true;
    if(idx < n){
        return bf(idx+1,x) || bf(idx+1,x-n_lst[idx]);
    }
    return false;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> n_lst[i];
    cin >> q;
    for(int i=0;i<q;i++) cin >> q_lst[i];

    for(int i=0;i<q;i++){
        if(bf(0,q_lst[i]))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}

