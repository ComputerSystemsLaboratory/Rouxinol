#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    bool p[1000000];
    while(cin>>n){
        int n_sq = (int)sqrt(n);
        for(int i=0; i<n; i++){
            p[i] = true;
        }
        p[0] = false;

        for(int i=1; i<n_sq; i++){
            if(p[i]){
                for(int j=i*2+1; j<n; j=j+(i+1)){
                    p[j] = false;
                }
            }
        }

        int cnt=0;
        for(int i=0; i<n; i++){
            if(p[i]){
                cnt++;
            }
        }

        cout<<cnt <<endl;

    }
    return 0;
}