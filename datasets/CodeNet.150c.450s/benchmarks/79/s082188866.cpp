#include <iostream>
#include <string>

using namespace std;
 
 
int n, r, p, c;
int card[51], tmp[51];
 
int main(){
    while(cin >> n >> r, n){
        if(n == 0 && r == 0) break;
        for(int i = 0; i < n; i++) card[i] = n-i;
        for(int i = 0; i < r; i++){
            cin >> p >> c;
            p--;
            for(int j = p; j < p+c; j++) tmp[j-p] = card[j];
            for(int j = p-1; j >= 0; j--) card[j+c] = card[j];
            for(int j = 0; j < c; j++) card[j] = tmp[j];
        }
        cout << card[0] << endl;
    }
}