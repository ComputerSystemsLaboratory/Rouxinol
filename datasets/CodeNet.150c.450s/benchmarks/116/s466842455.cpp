#include <iostream>
using namespace std;

int main(){
    int n,k;
    
    while(1){
        cin >> n >> k;
        int N[n],sum[n-k+1];
        if(n==0 && k==0) break;
        for(int i=0; i<n-k+1; i++){
            sum[i] = 0;
        }
        
        for(int i=0; i<n; i++){
            cin >> N[i];
        }
        for(int i=0; i<=n-k; i++){
            for(int j=0; j<k; j++){
                sum[i] += N[i+j];
            }
        }
        int max = 0;
        for(int i=0; i<=n-k; i++){
            if(max < sum[i]){
                max = sum[i];
            }
        }
        cout << max << endl;
    }
}