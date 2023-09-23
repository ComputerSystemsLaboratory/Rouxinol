#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(!n) break;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int mx=-99999999;
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                if(mx < sum+a[j]) mx = sum+a[j];
                sum += a[j];
            }

        }
        cout << mx << endl;
    }

    return 0;
}