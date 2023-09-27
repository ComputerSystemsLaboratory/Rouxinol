#include <iostream>
#include <utility>
using namespace std;

int main(){
    int n, r, p, c;
    int card[50];
    int ncard[50];
    cin >> n >> r;
    while(n || r){
        for(int i=0;i<n;++i){
            card[i] = i;
            ncard[i] = i;
        }
        for(int i=0;i<r;++i){
            cin >> p >> c;
            for(int j=0;j<c;++j){
                ncard[j] = card[p+j-1];
            }
            for(int j=c;j<c+p-1;++j){
                ncard[j] = card[j-c];
            }
            for(int j=c+p-1;j<n;++j){
                ncard[j] = card[j];
            }
            for(int j=0;j<n;++j){
                card[j] = ncard[j];
            }
        }
        cout << n-card[0] << endl;
        cin >> n >> r;
    }
}