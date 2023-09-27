#include <iostream>
#include <vector>
using namespace std;

int main(){
    while(1){
        int n,r;
        cin >> n >> r;
        if(n==0) break;
        
        vector<int> deck(n);
        for(int i=0; i<n; i++){
            deck[i] = n-i;
        }
        
        for(int i=0; i<r; i++){
            int p,c;
            cin >> p >> c;
            vector<int> tmp(c);
            for(int j=0; j<c; j++){
                tmp[j] = deck[p+j-1];
            }
            for(int j=p-2; j>=0; j--){
                deck[j+c] = deck[j];
            }
            for(int j=0; j<c; j++){
                deck[j] = tmp[j];
            }
        }
        cout << deck[0] << endl;
    }
    return 0;
}