#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    if(n < 0 || n > 52) return -1;
    int S[13] = {0},H[13] = {0},C[13]= {0},D[13]= {0};
    for(int i = 0;i < n; i++){
        char c;
        int v;
        cin >> c >> v;
        if(c == 'S'){
            S[v-1] = 1;
        }else if(c == 'H'){
            H[v-1] = 1;
        }else if(c == 'C'){
            C[v-1] = 1;
        }else if(c == 'D'){
            D[v-1] = 1;
        }else{
            continue;
        }
    }
//    for(auto s:S) cout << s << "\t";
//    cout << "&&&&&&&&&&&&&&&&" << endl;

//    check missing
//    cout << "--------------------------" << endl;
        for(int i = 1; i <= 13; i++){
            if(S[i-1] == 0){
                cout << "S" << " " << i << endl;
            }
        }
    for(int i = 1; i <= 13; i++){
        if(H[i-1] == 0){
            cout << "H" << " " << i << endl;
        }
    }
    for(int i = 1; i <= 13; i++){
        if(C[i-1] == 0){
            cout << "C" << " " << i << endl;
        }
    }
    for(int i = 1; i <= 13; i++){
        if(D[i-1] == 0){
            cout << "D" << " " << i << endl;
        }
    }
    return 0;
}
