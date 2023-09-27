#include <iostream>
using namespace std;
 
int main(){
    int n, x;
    int cnt;
    while(true){
        cnt = 0;
        cin >> n >> x;
        if(n==0 && x==0) break;
        for(int i=1;i<n-1;i++){
            for(int j=i+1; j<n;j++){
                for(int k=j+1; k<n+1; k++){
                    if(i+j+k==x){
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
}
