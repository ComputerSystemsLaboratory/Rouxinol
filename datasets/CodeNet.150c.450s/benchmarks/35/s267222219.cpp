
#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==0)
            break;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        int Max = a[0];
        
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum+=a[j];
                if(Max < sum) Max = sum;
            }
        }
        cout << Max << endl;
    }
    return 0;
}