#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    while(1){
        int m, mi, ma;
        cin>> m>> mi>> ma;
        if(!(m||mi||ma)) break;
        int P[m];
        for(int i=0; i<m; i++) cin>> P[i];

        sort(P, P+m);
        reverse(P, P+m);
        int ans=0, magap=0;
        for(int n=mi; n<=ma; n++){
            if(magap<=P[n-1]-P[n]){
                ans=n;
            }
            magap=max(magap, P[n-1]-P[n]);
        }

        cout<< ans<< endl;
    }

    return 0;
}