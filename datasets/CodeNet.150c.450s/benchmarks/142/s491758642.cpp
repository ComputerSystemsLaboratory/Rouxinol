#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    for(int i =  1 ; i <= n - k ; i++){
        if(a[i] < a[k+i]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    
    return 0;
}