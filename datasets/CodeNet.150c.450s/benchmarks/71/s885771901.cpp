#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int ans=0;
        if(n>36)
            cout << 0 << endl;
        else{
            int m = 10;
            for(int i=0;i<m;i++){
                for(int j=0;j<m;j++){
                    for(int k=0;k<m;k++){
                        for(int l=0;l<m;l++){
                            if(i+j+k+l==n)
                                ans++;
                        }
                    }
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}