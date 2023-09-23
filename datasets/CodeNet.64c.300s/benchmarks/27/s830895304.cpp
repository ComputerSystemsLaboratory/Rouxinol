#include<iostream>
using namespace std;

int main(){
    
    int n, x;
    
    while(1){
        int count = 0;
        cin >> n >> x;
        if((n==0) && (x==0)) break;
        for(int i=1; i<=n; i+=1){
            for(int j=1; j<=n; j+=1){
                for(int k=1; k<=n; k+=1){
                    if((i+j+k) == x){
                        if((i!=j) && (j!=k) && (k!=i)) {
                            count += 1;
                        }
                    }
                }
            }
        }
        count /= 6;
        cout << count << endl;
    }
    return 0;
}
