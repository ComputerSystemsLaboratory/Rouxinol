#include<bits/stdc++.h>
using namespace std;

int main(void){
    while(true){
        int n=0, min = 10000000, dif=0, score[1010];
        cin >> n;
        if(n==0) break;
        for(int i=0;i<n;++i) cin >> score[i];
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                int dif = abs(score[i]-score[j]);
                if(min > dif) min = dif;
            }
        }
        cout << min << endl;
    }
}
