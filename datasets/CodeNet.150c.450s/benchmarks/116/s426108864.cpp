#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    while(true){
    int n,k,max=-1e9,sum=0;
    cin >> n >> k;
    if(n==0) break;
    int ar[n];
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        ar[i]=a;
    }
    
    for(int i=0;i<k;i++){
            sum += ar[i];
    }
    
        for(int j=0;j<n-k+1;j++){
            if(sum>max) max=sum;
            sum = sum + ar[k+j] - ar[j];
        }
    cout << max <<endl;
    }
}