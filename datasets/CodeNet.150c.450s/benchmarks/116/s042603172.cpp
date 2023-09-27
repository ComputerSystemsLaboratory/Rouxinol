#include<iostream>
using namespace std;

int num[100000];
int main(){
    int n, k;
    int a;
    int i;
    long long int now;
    long long int max;
    cin >> n >> k;
    while(n || k){
        for(i=0;i<n-k;i++){
            num[i] = 0;
        }
        now = 0;
        max = 0;
        for(i=0;i<k;i++){
            cin >> a;
            num[i] -= a;
            now += a;
        }
        for(;i<n-k;i++){
            cin >> a;
            num[i] -= a;
            num[i-k] += a;
        }
        for(;i<n;i++){
            cin >> a;
            num[i-k] += a;
        }
        for(i=0;i<n-k+1;i++){
            if(max < now){
                max = now;
            }
            now += num[i];
        }
        cout << max << endl;
        cin >> n >> k;
    }
}