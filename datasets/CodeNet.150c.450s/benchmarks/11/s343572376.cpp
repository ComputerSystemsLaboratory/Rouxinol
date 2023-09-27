#include <iostream>

using namespace std;
int main(void){
    
    int n,num;
    string symbol;
    cin >> n;
    
    int S[13],H[13],C[13],D[13];
    
    for(int i=0;i<13;i++){
        S[i]=0;
        H[i]=0;
        C[i]=0;
        D[i]=0;
    }
    
    for(int i=0;i<n;i++){
        cin >> symbol >> num;
        if(symbol=="S"){
            S[num-1]=1;
        }else if(symbol=="H"){
            H[num-1]=1;            
        }else if(symbol=="C"){
            C[num-1]=1;
        }else{
            D[num-1]=1;
        }
    }
    
    for(int i=0;i<13;i++){
        if(S[i]==0) cout << "S " << i+1 << endl;
    }
    for(int i=0;i<13;i++){
        if(H[i]==0) cout << "H " << i+1 << endl;
    }
    for(int i=0;i<13;i++){
        if(C[i]==0) cout << "C " << i+1 << endl;
    }
    for(int i=0;i<13;i++){
        if(D[i]==0) cout << "D " << i+1 << endl;
    }

    return 0;
}

