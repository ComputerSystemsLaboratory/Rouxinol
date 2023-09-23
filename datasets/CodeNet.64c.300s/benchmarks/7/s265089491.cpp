#include<iostream>
using namespace std;

int main(void){
    int i, j, n, r, S[13], H[13], C[13], D[13];
    char s[2];
    cin >> n;
    for (i=0; i<13; i++){ 
        S[i]=i+1;
        H[i]=i+1;
        C[i]=i+1;
        D[i]=i+1;
    }
    for (i=0; i<n; i++){
        cin >> s >> r;
        if(s[0]=='S') S[r-1] = 0; 
        if(s[0]=='H') H[r-1] = 0; 
        if(s[0]=='C') C[r-1] = 0; 
        if(s[0]=='D') D[r-1] = 0; 
    }
    for (i=0; i<4; i++){
        for (j=0; j<13; j++){
            if(i==0 && S[j]!=0) cout << "S" << " " << S[j] << endl;
            if(i==1 && H[j]!=0) cout << "H" << " " << H[j] << endl;
            if(i==2 && C[j]!=0) cout << "C" << " " << C[j] << endl;
            if(i==3 && D[j]!=0) cout << "D" << " " << D[j] << endl;
        }
    }
    return 0;
}